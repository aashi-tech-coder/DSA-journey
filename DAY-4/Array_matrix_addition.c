#include <stdio.h>
int main(){
    int A[10][10] , B[10][10] , C[10][10];
    int row , column;
    int i , j;
    //taking user input
    printf("Enter the number of rows :");
    scanf("%d" , &row);
    
    printf("Enter the number of column:");
    scanf("%d", &column);
    
    for(i = 0;i<row ;i++){
        for( j =0; j<column ; j++){
            scanf("%d" , &A[i][j]);
        }
    }
    for(i = 0;i<row ;i++){
        for( j =0; j<column ; j++){
            scanf("%d" ,&B[i][j]);
        }
    }
    // adding matrix
    for(i = 0;i<row ;i++){
        for( j =0; j<column ; j++){
            C[i][j] =  A[i][j] + B[i][j];
        }
    }
  //printing the result
    printf("result :");
    for(i = 0;i<row ;i++){
        for( j =0; j<column ; j++){
            printf("%d\t" , C[i][j]);
        }
         printf("\n");
    }
    
    return 0;
}
