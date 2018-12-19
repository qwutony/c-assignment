#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Array1[5] = {50,66,78,91,120};

    for (int i=0; i< 5 ; i++)
{
    printf("%4d %4c %4x\n", Array1[i],Array1[i],Array1[i]);
}

    return 0;
}