#include<stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    if(k>n||k<1){
        printf("-1\n");
        return -1;
    }
    sortArray(arr,n);
    return arr[k-1];
}