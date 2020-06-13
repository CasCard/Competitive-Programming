#include<stdio.h>
#include <string.h>
int main(){
    char s1[10],s2[10];
    char alphabets[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%s %s",&s1,&s2);
    int count=0;
    int start=0;
    for (int i = 0; i < strlen(s1); ++i) {
        start=0;
        for (int j = 0; j < 39; ++j) {
            if (s1[i]==s2[i]){
                break;
            }else{
                if (alphabets[j]==s1[i]){
                    printf("\n %c %c start",alphabets[j],s1[i]);
                    start=1;
                    j++;
                }
                if (start){
                    count+=1;
                    printf("\n %c %c %d",alphabets[j],s2[i],count);
                    if (alphabets[j]==s2[i]){
//                        printf("\n %c %c",s1[i],s2[i]);
                        start=0;
                        count-=1;
                        i++;
                    }
                }
            }

        }
    }
    printf("\ncount: %d",count);
    return 0;
}
