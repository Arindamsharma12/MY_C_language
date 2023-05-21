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
    printf("\t***RESULT***\n");
    printf("Total percentage = %.2f \n",percentage);
    if(percentage > 90 && percentage <= 100){
        printf("Grade = A");
    }
    if(percentage > 80 && percentage <= 90){
        printf("Grade = B");
    }
    if(percentage >= 60 && percentage <= 80){
        printf("Grade = C");
    }
    if(percentage < 60){
        printf("Grade = D");
    }
    return 0;
}
