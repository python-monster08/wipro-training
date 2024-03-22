#include <stdio.h>

void main()
{
    int var1 = 10, var2 = 20;
    int result = 0;

    //addition
    result = var1 + var2;
    printf("\nAddition of two numbers=%d", result);

    result = var2 - var1;
    printf("\nSubtration of two number=%d", result);

    result = var1 * var2;
    printf("\nMultification of two number=%d", result);

    result = var2 / var1;
    printf("\nDividation of two number=%d", result);


    result = 10 % 20;
    printf("\nModulus of 5 mod 3=%d", result);      // if 5%3 = 2 and  10%20 = 10  or 100%20 = 0
}