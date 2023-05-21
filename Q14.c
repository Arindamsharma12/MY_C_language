#include<stdio.h>

int main(){
    int odd = 0, even = 0,n;
    printf("Enter num: ");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++){
        if(i % 2 == 0){
            odd += i;
        }
        else{
            even += i;
        }
    }
    printf("Even sum = %d Odd sum = %d",even,odd);
    return 0;
}
