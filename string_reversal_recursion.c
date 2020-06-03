#include <stdio.h>
#define MAX 100
char* ReverseOfString(char[]);
int main(){
    char str1[MAX],*revstr;
    scanf("%s",str1);
    revstr=ReverseOfString(str1);
    printf("%s",revstr);
    return 0;
}
char* ReverseOfString(char str1[]){
    static int i=0;
    static char revstr[MAX];
    if (*str1){
        ReverseOfString(str1+1);
        revstr[i++]=*str1;
    }
    return revstr;
}
