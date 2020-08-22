//Sliding window maximum
#include <stdio.h>
int main(){
    int n,arr[15],k,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (int j = 0; j < (n+1-k); ++j) {
        max=arr[j];
        for (int i = j; i < (j+k); ++i) {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("%d ",max);
    }
    return 0;
}
