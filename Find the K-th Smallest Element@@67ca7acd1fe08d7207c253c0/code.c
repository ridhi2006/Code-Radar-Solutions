#include<stdio.h>
int kthSmallest(int n,int arr[],int k){
    int smallest=arr[0];
    int valid;
    for(int i=1;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            smallest=arr[i];
            valid=1;
        }
        if(!valid){
            printf("-1");
        }
    }
    return smallest;
}