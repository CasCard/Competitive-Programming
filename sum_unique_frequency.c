//Write a C program to find the sum of unique array elements using recursion. 
//Also find the number of occurrences of elements. You can use two functions namely frequency_elements(int arr1[ ]) 
//,for finding the frequency of unique elements of the array and sum_recursion(arr2[ ]),for finding the sum of unique elements. 
//You can add function parameters to the above functions.
#include <stdio.h>
void frequency_elements(int arr1[]);
int sum_recursion(int arr2[],int n);
int main(){
    int arr[5],ans,temp;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Frequency:\n");
    frequency_elements(arr);
    for(int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    ans=sum_recursion(arr,5);
    printf("Sum:%d",ans);
    return 0;
}
void frequency_elements(int arr1[]){
    int freq[5]={-1,-1,-1,-1,-1},count=0;
    for (int i=0;i<5;i++){
        count=1;
        for (int j=i+1;j<5;j++){
            if (arr1[i]==arr1[j]){
                count++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0){
            freq[i]=count;
        }

    }
    for (int i=0;i<5;i++){
        if (freq[i]!=0) {
            printf("%d:%d\n",arr1[i],freq[i]);
        }
    }
}
int sum_recursion(int arr2[],int n){
    if(n<=0)
        return 0;
    if(arr2[n-1]!=arr2[n-2]){
        return sum_recursion(arr2,n-1)+arr2[n-1];
    }else{
        return sum_recursion(arr2,n-1);
    }

}
