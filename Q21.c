#include<stdio.h>

int main(){
    int n,sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("sum = %d",sum);
    return 0;
}
