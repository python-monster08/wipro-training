/*
Q 1:
Language:
C


Problem
statement : Write the logic to for incrementing Squared Number-Star Pattern.


Input
Format      : Take N as input of type
integer.


Output
Format     : Print incrementing Squared
Number-Star Pattern.

Constraints:
2<=N<=10

Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
*/


#include <stdio.h>

void printIncrementingSquaredNumberStarPattern(int N) {
    int num = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", num++);
            if (j != N - 1)
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 2 || N > 10) {
        printf("Invalid input! N should be between 2 and 10.\n");
        return 1;
    }

    printIncrementingSquaredNumberStarPattern(N);

    return 0;
}
