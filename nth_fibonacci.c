//using recursion find the nth term of fibonacci series
#include <stdio.h>
int nth_fibonacci(int n){
    if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }else{
        return nth_fibonacci(n-1)+nth_fibonacci(n-2);
    }
}
int main(){
    int n,ans;
    scanf("%d",&n);
    ans=nth_fibonacci(n);
    printf("%d",ans);
    return 0;
}
