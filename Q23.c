#include<stdio.h>

int maximum(int a[],int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int minimum(int a[],int n){
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {5,3,0,9,4};
    int n = sizeof(arr)/sizeof(int);
    int max, min;
    max = maximum(arr,n);
    min = minimum(arr,n);
    printf("max = %d min = %d",max,min);
    return 0;
}
