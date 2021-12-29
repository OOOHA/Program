#include <stdio.h>
#define m 3
#define n 2
#define p 2

void main()
{
    int A[m + 1][n + 1], B[n + 1][p + 1], C[m + 1][p + 1];
    int i, j, k;

    printf("請依序輸入二維陣列A(3x2)的元素內容:\n");
    for (i = 1 ; i <= 3; i++) {
        for( j= 1; j <= 2; j++) {
            scanf("%d",&A[i][j]);
        }
    }/*end for*/

    printf("請依序輸入二維陣列B(2x2)的元素內容:\n\n");
    for (i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }/*end for*/

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <=p ; j++)
        {
            C[i][j] = 0; /*初始化陣列C */
            for(k = 1; k <= n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j]; /*陣列A乘上陣列B,存入陣列C */
            }
            printf("%d ", C[i][j]); /*輸出陣列C */
        }
        printf("\n");
    }
}