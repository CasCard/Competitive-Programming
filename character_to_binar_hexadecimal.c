#include<stdio.h>
#include <string.h>
#include <math.h>
void decToHexa(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 87;
            i++;
        }

        n = n/16;
    }
    for(int j=i-1; j>=0; j--){
        printf("%c",hexaDeciNum[j]);
    }
}
long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

void string_to_binary(char str[],int length){
    for (int i = 0; i <length ; ++i) {
        int val=(int)str[i];
        printf("0");
        printf("%ld",decimalToBinary(val));
    }


}
void string_to_hex(char str[],int length){
    for (int i = 0; i <length ; ++i) {
        int val=(int)str[i];
        decToHexa(val);
    }
}
int main(){
    char string[20],even[20],odd[20],j=0,k=0;
    int choice,characterLength;
    scanf("%s",string);
    characterLength=strlen(string);
    for(int i=0;i<characterLength;i++){
        if (i%2 !=0){
            even[j]=string[i];
            j++;
        }else{
            odd[k]=string[i];
            k++;
        }
    }
    strcat(odd,even);
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            string_to_binary(odd,characterLength);
            break;
        case 2:
            string_to_hex(odd,characterLength);
            break;

    }
    return 0;
}
