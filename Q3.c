#include<stdio.h>
#define PIE 3.14

int main(){
    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    float cir = 2 * PIE * r;
    float area = (PIE) * r * r;
    printf("Circumference = %.2f Area = %.2f",cir,area);
    return 0;
}
