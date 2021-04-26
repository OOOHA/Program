#include <stdio.h>
 
 void print_2d_array(int rows, int cols, int a[][cols]) {
      for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
 
int main(void) {
     int arr[][3] = {
         {1, 2, 3},
         {4, 5, 6}	
     };

     print_2d_array(2, 3, arr);
 }