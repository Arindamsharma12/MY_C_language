#include<stdio.h>

int linear_search(int a[], int n,int k){
    for(int i = 0;i < n; i++){
        if(a[i] == k){
            return i;
        }
    }
}

int main(){
    int arr[] = {0,4,2,5,1,7};
    int n = sizeof(arr)/sizeof(int);
    int element = 5;
    int ans = linear_search(arr,n,element);
    
    printf("%d is found at position %d",element,ans);
    return 0;
}
