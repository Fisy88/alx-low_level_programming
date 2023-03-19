#include <stdio.h>

/**
 * main - prints the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main() {
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of short int: %d byte(s)\n", sizeof(short int));
    printf("Size of long int: %d byte(s)\n", sizeof(long int));
    printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long double: %d byte(s)\n", sizeof(long double));
    printf("Size of char*: %d byte(s)\n", sizeof(char*));
    printf("Size of int*: %d byte(s)\n", sizeof(int*));
    printf("Size of void*: %d byte(s)\n", sizeof(void*));
    return 0;
}
