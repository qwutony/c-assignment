#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this is just like copy and pasting the contents of password_check.h right here
// Note that the header file uses double quotation marks
#include "password_check.h"

// int compare_strings(char **first, char **second) {
int compare_strings(const void *first, const void *second) {
    const char **first_thing = (const char **) first;
    const char **second_thing = (const char **) second;
    return strcmp(*first_thing, *second_thing);
}

int main(int argc, char const *argv[]) {

    FILE *dictionary_file;

    // find out how many lines are in the dictionary
    dictionary_file = fopen(argv[1], "r");

    int lines = 0;
    char c;
    while(!feof(dictionary_file)) {
        c = fgetc(dictionary_file);
        if (c == '\n') {
            lines++;
        }
    }
    fclose(dictionary_file);

    //pointer to start of array, each element is a char *
    // (char *) is a pointer to first character of string
    char **dictionary_words; 

    dictionary_words = malloc(lines * sizeof(char *));

    dictionary_file = fopen(argv[1], "r");

    size_t n; // need this to getline to do what we want
    for (int line = 0; line < lines; line++) {
        // dictionary_words[line] = "new string";
        n = 0;
        getline(& dictionary_words[line], &n, dictionary_file);

        int length = strlen(dictionary_words[line]);
        dictionary_words[line][length - 1] = '\0';
    }
    
    fclose(dictionary_file);

    qsort(dictionary_words, lines, sizeof(char *), compare_strings);

    // for (int line = 0; line < lines; line++) {
    //     printf("Word %d: %s\n", line, dictionary_words[line]);
    // }

    while (1) {
        n = 0;
        char *password;

        printf("Please enter a password: ");
        getline(& password, & n, stdin);

        int length = strlen(password);
        password[length - 1] = '\0';

        if (strlen(password) == 0) {
            free(password);
            break;
        }

        password_check(password, dictionary_words, lines);

        free(password);
    }

    // free the contents of the dictionary
    for (int line = 0; line < lines; line++) {
        free(dictionary_words[line]);
    }

    // and then free the dictionary itself
    free(dictionary_words);

    return 0;

}