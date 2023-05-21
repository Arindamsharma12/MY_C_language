#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int s_len(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

char *s_cat(char s1[],char s2[]){
    int n1 = s_len(s1);
    int n2 = s_len(s2);
    char *result = (char *)malloc((n1 + n2) * sizeof(char));
    int j = 0;
    for(int i = 0; s1[i] != '\0'; i++){
        result[j] = s1[i];
        j++;
    }
    for(int i = 0; s2[i] != '\0'; i++){
        result[j] = s2[i];
        j++;
    }
    result[j] = '\0';
    return result;
}

void s_copy(char s1[],char s2[]){
    int j = 0;
    for(int i = 0; s2[i] != '\0'; i++){
        s1[j] = s2[i];
        j++;
    }
    s1[j] = '\0';
}

int main(){
    int ans;
    char s[] = "Hello ";
    char s1[] = "Sexy";
    char copy[10];
    char *res;
    res = s_cat(s,s1);
    ans = s_len(res);
    printf("%d\n",ans);
    puts(res);
    s_copy(copy,s);
    puts(copy);
    return 0;
}
