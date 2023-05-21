#include<stdio.h>
#include<stdlib.h>

int main(){
    int r1,r2,c1,c2,sum = 0;
    printf("Enter order of matrix A: ");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter order of matrix B: ");
    scanf("%d %d",&r2,&c2);
    
    if(c1 != r2){
        printf("AB do not exist!!!\n");
        exit(0);
    }
    else{
        int A[r1][c1], B[r2][c2], C[r1][c2];
        printf("Input Matrix A: \n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j <c1; j++){
                scanf("%d",&A[i][j]);
            }
        }

        printf("Input Matrix B: \n");
        for(int i = 0; i < r2; i++){
            for(int j = 0; j <c2; j++){
                scanf("%d",&B[i][j]);
            }
        }

        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                C[i][j] = 0;
                for(int k = 0; k < c1; k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        printf("Matrix C:\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
