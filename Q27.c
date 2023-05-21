#include<stdio.h>

int main(){
    int r,c,sum = 0;
    printf("Enter Order of matrix A:\n");
    scanf("%d %d",&r,&c);

    int A[r][c];
    printf("Input Matrix A:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int i = 0;
    while(i < r){
        sum += A[i][i];
        i++;
    }
    printf("Sum of diagonal elements: %d",sum);
    return 0;
}
