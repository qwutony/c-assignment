#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // open a file (store file handle in target_file)
    FILE *target_file = fopen("buffer-overflow.c", "r");

    // create somewhere to store file contents
    char buffer[24];

    int a = 5;
    int c = 6;

    // read into buffer from file
    // if they are not equivalent it will read across the memory
    fread(buffer, 1, 62, target_file);

    // gcc -Wall --> allows for finding of warnings
    
    int b = 9;

    c++;
    c++;

    for (int i = 0; i < 62; i++) {
        printf("%3x", buffer[i]);
    }
    printf("\n");
    for (int i = 0; i < 62; i++) {
        if (buffer[i] == '\n') {
            printf("  ");
        } else {
            printf("%3c", buffer[i]);
        }
    }
    printf("\n");

    fclose(target_file);

    return 0;
}