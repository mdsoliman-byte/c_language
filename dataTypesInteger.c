// Fundamental data Type c
// int , float , double , cher
// char  = 1 byte = 8 bit
// int  = 2 byte = 16 bit
// float  = 4 byte = 32 bit
// double  = 8 byte = 64 bit
//
// formate
// int = %d
// char = %c
// float = %f
// double = %lf
//
#include <stdio.h>
int main()
{
    // int a = 56;

    // double b = 5.6;
    // double b = (double)a; // type cousting
    // printf("A = %d\n", a);
    // printf("B = %lf", &b); // & FOR VARIABLE ADDRESS
    // int a, b, sum;
    // scanf("%d ", &a);
    // scanf("%d ", &b);
    // sum = a + b;

    // printf("This Program rezult %d\n", sum);

    //  int a, b, sum;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // sum = a + b;
    // printf("Result = %d\n ", sum);

    int a, b, sum ;
    scanf("%d %d", &a, &b);
    // scanf("%d", &b);
    sum = a + b ;
    printf("this  : %d", sum );
}