#include <stdio.h>

void fake_print(char *string) {
    
    int i = 0;

    do {
        i++;
        printf("%c", string[i]);
    }
    while (string[i] != 0);
    printf("\n");
}

int main(int argc, char const *argv[]) {   
    
    // manual strings!

    // space == 32
    // C-style strings terminate with a 0
    // 0 is also called a null character
    char manual_strings[15] = {'h', 'e', 'l', 'l', 'o', 32, 
                            'w', 'o', 'r', 'l', 'd', '\n', 0};

    // printf(manual_strings);
    fake_print(manual_strings);
    int x = 47;
    // a char is not a letter or number, but it is a smaller integer
    // char easy_string = "abcd";

    // char *easy_string = "abcd";

    // for (int i = 0; i < 20; i++) {

    //     // can still use array syntax even if not array
    //     printf("%4d %4c %4x\n", easy_string[i], easy_string[i], easy_string[i]);
    // }


    return 0;
}