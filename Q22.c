#include<stdio.h>

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int A[n], B[n],C[n];
    printf("Enter A's element:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
    }
    printf("Enter B's element:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&B[i]);
    }
    for(int i= 0; i < n; i++){
        C[i] = A[i] + B[i];
    }
    for(int i = 0;i < n; i++){
        printf("%d ",C[i]);
    }
    
    return 0;
}
