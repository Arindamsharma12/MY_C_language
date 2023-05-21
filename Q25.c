#include<stdio.h>

void bubble_sort(int a[],int n){
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
    }
}

int main(){
    int arr[] = {3,1,7,0,4,8};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
