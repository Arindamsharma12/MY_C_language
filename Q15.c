#include<stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter number of terms in fibonacci series: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        printf("%d ",t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
