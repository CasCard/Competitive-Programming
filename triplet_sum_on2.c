// C program to find all the triplets with the given sum

#include<stdio.h>
void find_all_triplets(int arr[], int n, int sum)
{
    int temp,p,q,sum_value;
    for (int i = 0; i < n; ++i) {
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int k = 0; k < n-2; ++k){
        p=k+1;
        q=n-1;
        while(p<q){
            sum_value=arr[k]+arr[p]+arr[q];
            if (sum_value==sum) {
                printf("%d %d %d \n", arr[k], arr[p], arr[q]);
                p++;
                q--;
            }
            else if (sum_value<sum)
                p++;
            else
                q--;
        }
    }
}

int main()
{
    int n, sum;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput the array elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the sum value : ");
    scanf("%d",&sum);
    printf("\nThe triplets are \n ");
    find_all_triplets(arr, n, sum);
    return 0;
}
