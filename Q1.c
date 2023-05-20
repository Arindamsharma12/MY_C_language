#include<stdio.h>

int main(){
    float phy,chem, maths, bio, english;
    printf("Enter marks obtained in:\n");
    printf("Physics = ");
    scanf("%f",&phy);
    printf("Chemistry = ");
    scanf("%f",&chem);
    printf("Mahts = ");
    scanf("%f",&maths);
    printf("Biology = ");
    scanf("%f",&bio);
    printf("English = ");
    scanf("%f",&english);

    float sum, percentage;
    sum = phy + chem + maths + bio + english;
    percentage = sum/5.0;
    printf("Total marks obtained = %.2f\n",sum);
    printf("Total percentage = %.2f \n",percentage);
    return 0;
}
