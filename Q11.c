#include<stdio.h>

int main(){
    int a, b;
    char op;
    printf("Enter operator: ");
    scanf("%c",&op);
    printf("Enter two operands: ");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
                printf("%d",a+b);
                break;
        case '-': 
                printf("%d",a-b);
                break;
        case '*':
                printf("%d",a*b);
                break;
        case '/': 
                printf("%d",a/b);
                break;
        default:
                printf("Oops! Invalid operator");
    }
    return 0;
}
