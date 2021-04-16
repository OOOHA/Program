#include<stdio.h>
#include<stdlib.h>

void times(int **,int **,int ,int ,int );//The sub function of the function of two matrix multiply
int r[3][3];//result  matrix 

int main()
{
	int a1[3][3];//first matrix
	int a2[3][3];//second matrix
	int *m1[3] = {a1[0],a1[1],a1[2]};
	int *m2[3] = {a2[0],a2[1],a2[2]};

	printf("First 3X3 matrix:\n");
	for(int i = 0;i < 3;i++)//First matrix intput
	{
		for(int j = 0;j < 3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
    
	printf("Second 3X3 matrix:\n");
	for(int x = 0;x < 3;x++)//second matrix intput
	{
		for(int y = 0;y < 3;y++)
		{
			scanf("%d",&a2[x][y]);
		}
	}

	times(m1,m2,3,3,3);

	printf("The result of the multiplication of two matrices :\n");

	for(int rows = 0;rows < 3;rows++)
	{
		for(int cols = 0;cols < 3;cols++)
		{
			printf("%d  ",r[rows][cols]);
		}
		printf("\n");
	}

		 
	
	return 0;
 } 
 
 void times(int **x, int **y, int rows,int cols,int cols2)//The function of two matrix multiply  
 {
 	for (int i = 0 ; i < rows ; i++) 
	{ 
        for (int j = 0 ; j < cols ; j++) 
        {
            r[i][j] = 0;
            for(int k = 0 ; k < cols2; k++) 
            { 
                r[i][j] += x[i][k] * y[k][j]; //matrix x multiplied matrix y and store into matrix r
            }
        }
    }				
 }