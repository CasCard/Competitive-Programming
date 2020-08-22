//
// Created by abel on 09/07/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void cypher1(char *x,int size,int key);
void cypher2(char *s,int length);
int main(){
    setbuf(stdout,NULL);
    char *letter,*newletter;
    int shiftkey,length,newlength;
    scanf("%[^\n]%*c",letter);
    length=strlen(letter);
    scanf("%d",&shiftkey);
    int j=0;
    for (int i = 0; i <= length; ++i) {
        if (letter[i] != ' '){
            *(letter+j)=toupper(*(letter+i));
            j++;
        }
    }
    newlength=strlen(letter);
//    printf("%s",letter);
    cypher1(letter,newlength,shiftkey);
    return 0;
}
void cypher1(char *x,int size,int key){

    for (int i = 0; i < size; ++i) {
        if ((toascii(*(x+i))+key)>90){
            *(x+i)=61+key;
        }else{
            *(x+i)=toascii(*(x+i))+key;
        }
    }
    cypher2(x,size);
}
void cypher2(char *s,int length){
//    printf("\n%s\n",s);
    int *number=(int*)(malloc(length));

    for (int i = 0; i < length; ++i) {
//        printf("%02d",toascii(*(s+i))-64);
        *(number+i)=(toascii(*(s+i))-64);
    }
    for (int j = length-1; j >= 0; --j) {
        int reverse=0,rem;
//        printf("%02d ",number[j]);
        while(number[j]!=0){
            rem=number[j]%10;
            reverse=reverse*10+rem;
            number[j]/=10;
        }
        if (reverse<10){
            reverse=reverse*10;
        }
        printf("%d",reverse);
    }


}

