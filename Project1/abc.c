#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(short int));
    printf("%d\n", sizeof(long int));
    printf("%d\n", sizeof(unsigned char));
    printf("%d\n", sizeof(unsigned short));
    printf("%d\n", sizeof(unsigned int));
    printf("%d\n", sizeof(unsigned long));
    printf("%d\n", sizeof(unsigned long long));
    return 0;
    
}