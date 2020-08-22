//
// Created by abel on 04/07/20.
//
#include <stdio.h>
#include <math.h>
void divisible_by_11(int number){
    int diff=0,odd=0,even=0,reminder=0,i=0;
    while (number){
        reminder=number%10;
        if (i%2==0){
            even=even+reminder;
        }else{
            odd=odd+reminder;
        }
        number=number/10;
        i++;
    }
    diff=even-odd;
    if(diff%11==0 || diff==0){
        printf("Divisible by 11");
    }else{
        printf("Not divisible by 11");
    }
}
void divisible_by_13(int number){
    int size=floor(log10(abs(number)))+1,reminder;
    while(size){
        reminder=number%10;
        number=number/10;
        number=number+(4*reminder);
        size--;
    }
    if (number%13==0){
        printf("Divisible by 13");
    }else{
        printf("Not divisible by 13");
    }
}
#include<stdio.h>
int main(){
    int choice,number;
    scanf("%d",&number);
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            if (number==0){
                printf("Divisible by 11");
            }else{
                divisible_by_11(number);
            }
            break;
        case 2:
            if (number==0){
                printf("Divisible by 13");
            }else{
                divisible_by_13(number);
            }
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
