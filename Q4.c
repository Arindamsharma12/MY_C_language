#include<stdio.h>

int main(){
    float centigrade, Fahrenheit;
    printf("Enter temp in degree celcius: ");
    scanf("%f",&centigrade);

    Fahrenheit = (9/5) * centigrade + 32;
    printf("Temp in Fahrenheit = %.2f",Fahrenheit);
    return 0;
}
