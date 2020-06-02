#include<stdio.h>
void two_largest(int arr1[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr1[j]>arr1[i]){
               temp=arr1[i];
               arr1[i]=arr1[j];
               arr1[j]=temp;
            }
        }
    }
    if(arr1[0]==arr1[1]){
        printf("%d",arr1[0]);
    }else{
        printf("%d %d",arr1[0],arr1[1]);
    }


}
int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if (size){
        printf("%d",arr[0]);
    }else{
        two_largest(arr,size);
    }
    return 0;
}
