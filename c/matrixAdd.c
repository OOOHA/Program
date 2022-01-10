#include <stdio.h>
#define m 3
#define n 2
#define p 2

int main()
{
    int A[m + 1][n + 1], B[n + 1][p + 1], C[m + 1][p + 1];
    int i, j, k;

    printf("Please enter matrix A(3x2):\n");
    for (i = 1 ; i <= 3; i++) {
        for( j= 1; j <= 2; j++) {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Please enter matrix B(2x2):\n");
    for (i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nThe result of multiplying two arrays is:\n");
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <=p ; j++)
        {
            C[i][j] = 0;
            for(k = 1; k <= n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}