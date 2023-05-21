#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
        printf("Before Swapping\n");
        printf("a = %d b = %d\n",a,b);

    int temp = a;
        a = b;
        b = temp;
        printf("After Swapping\n");
        printf("a = %d b = %d",a,b);

    return 0;
}
