#include<stdio.h>

int dec_to_bin(int n){
    int binary = 0,rem,i = 1;
    while(n != 0){
        rem = n % 2;
        binary += rem*i;
        i *= 10;
        n /= 2;
    }
    return binary;
}

int bin_to_dec(int n){
    int decimal = 0,rem,i = 1;
    while(n != 0){
        rem = n % 10;
        decimal += rem*i;
        i *= 2;
        n /= 10;
    }
    return decimal;
}


int main(){
    int decimal,binary;
    printf("Enter nnumber: ");
    scanf("%d",&binary);
    decimal = bin_to_dec(binary);
    printf("%d",decimal);
    return 0;
}
