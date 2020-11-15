#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Size of int: %zd\n", sizeof(int));
    printf("Size of int: %zd\n", sizeof(char));
    printf("Size of int: %zd\n", sizeof(long));
    printf("Size of int: %zd\n", sizeof(long long));
    printf("Size of int: %zd\n", sizeof(double));
    printf("Size of int: %zd\n", sizeof(long double));

    return 0;
}