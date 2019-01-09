#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {
    
    int money = 15;

    // allocates the requested memory and returns a pointer to it
    int *p = malloc(sizeof(int));

    *p = 5;

    printf("money contains %d, and is located at %p\n", money, &money);
    printf("p contains %d, and is located at %p\n", *p, p);

    return 0;
}