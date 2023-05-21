#include<stdio.h>

int main(){
    int n,original_n,sum = 0, rem;
    printf("Enter number: ");
    scanf("%d",&n);
    original_n = n;
    while(n != 0){
        rem = n % 10;
        sum += rem*rem*rem;
        n /= 10;
    }
    if(original_n == sum){
        printf("%d is armstrong number",original_n);
    }
    else{
        printf("%d is not a armstrong number",original_n);
    }
    return 0;
}
