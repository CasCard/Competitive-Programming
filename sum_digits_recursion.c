#include <stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }else{
        return n%10+sum(n/10);
    }
}
int main(){
    int n,ans;
    scanf("%d",&n);
    ans=sum(n);
    printf("%d",ans);
    return 0;
}
