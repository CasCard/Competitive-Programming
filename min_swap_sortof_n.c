// minimum number of swaps required to sort an array of first N number
#include <stdio.h>
int minimumSwaps(int arr[],int n){
    int count=0;
    int i=0;
    while(i<n){
        if (arr[i]!=i+1){
            while (arr[i]!=i+1){
                int temp=0;
                temp=arr[arr[i]-1];
                arr[arr[i]-1]=arr[i];
                arr[i]=temp;
                count++;
            }
        }
        i++;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    return count;
}
int main(){
    int n,arr[20],ans;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    ans=minimumSwaps(arr,n);
    printf("\n%d",ans);

    return 0;
}
