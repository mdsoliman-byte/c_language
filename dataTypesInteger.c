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
//  data type modifiers
// short , long , signed , unsigned ,
#include <stdio.h>
#include <limits.h>
int main()
{
    int intData;
    double doubleData;
    float floatData;
    char charData;
    printf("Size of intData %d\n", sizeof(intData));
    printf("Size of FloatData %d\n", sizeof(floatData));
    printf("Size Of CharData %d\n", sizeof(charData));
    printf("Size of doubleData %d\n", sizeof(doubleData));

   short unsigned int a = SHRT_MIN;
   short unsigned int b = SHRT_MAX;
    printf("%d to %d", a, b);
    // short int value SHRT_MIN to SHRT_MAX = -32768 to 32767;
    //  long int value LONG_MIN to LONG_MAX = -2147483648 to 2147483647

    // signed int min value  to int max value = -2147483648 to 2147483647  its signed value
    // unsigned int min value 0 to max value = 0 to 4294967295
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

    // int a, b, sum ;
    // scanf("%d %d", &a, &b);
    // // scanf("%d", &b);
    // sum = a + b ;
    // printf("this  : %d", sum );
    int a , b , c ;
    

    return 0;
}