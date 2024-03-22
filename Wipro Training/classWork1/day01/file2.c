#include <stdio.h>

int main()
{
    int v1,v2,v3,v4;
    printf("\nEnter the values of v1,v2,v3 and v4:" );
    scanf("%d%d%d%d", &v1,&v2,&v3,&v4);
    // printf("\nAddress of v1=%u and its value=%d",&v1, v1);
    // printf("\nAddress of v1=%u and its value=%d",&v2, v2);
    // printf("\nAddress of v1=%u and its value=%d",&v3, v3);
    // printf("\nAddress of v1=%u and its value=%d",&v4, v4);
    // printf("\n");

    printf("\nEquality Operation: ", (v1==v2));
    printf("\nGreater than Operation: ", (v3>v4));
    printf("\nLesser Than Operation: ", (v3<v4));
    
    return 0;
}