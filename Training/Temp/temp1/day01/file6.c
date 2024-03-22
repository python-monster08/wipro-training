#include <stdio.h>

int multiply(int a, int b)
{
    int res = 0;
    while (b>0)
    {
        if (b & 1)
        {
            res += a; 
        }
        a <<= 1;
        b >>= 1;
    }
    return res;

}

int main(){
    int i,j;

    printf("Multiplication Table using bitwise operator:\n");
    for(i=1; i<=10; i++){
        for(j<1; j<=10; j++){
            printf("%d\n", multiply(i,j));
        }
        printf("\n");
    }
}