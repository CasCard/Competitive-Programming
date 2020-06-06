#include <stdio.h>
int isPrime(int n){
    int c;
    if (n==1){
        return 0;
    }
    for ( c = 2 ; c <= n - 1 ; c++ )
    {
        if ( n%c == 0 )
            return 0;
    }
    return 1;
}
int numberOfPrime(int arr[],int size){
    int count=0;
    for (int i = 0; i < size; ++i) {
        count+=isPrime(arr[i]);
    }
    return count;
}
int minWindowPeriod(int m,int n,int p){
    int arr[100],slider,numberOfPrimeInArray;
    for (int i = 0; i < (n-m+1); ++i) {
        arr[i]=m+i;
    }

    for(slider=1;slider<(n-m+1);slider++){

        int count[10],k=0,flag=0;
        while(k<((n-m+1-slider)+1)){
            int window[10],z=0;
            for (int j = k; j<slider+k; ++j) {
                window[z]=arr[j];
                z++;
            }
            numberOfPrimeInArray=numberOfPrime(window,slider);

            count[k]=numberOfPrimeInArray;
            k++;
        }

        for(int j=0;j<((n-m+1-slider)+1);j++){
            if (count[j]>=p){
                flag=1;
            }else{
                flag=0;
                break;
            }
        }
        if (flag){
            break;
        }
    }

    return slider;
}
int main(){
    int m,n,p,ans;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    ans=minWindowPeriod(m,n,p);
    printf("%d",ans);
}
