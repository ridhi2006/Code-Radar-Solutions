#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int n
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sortArray(arr,n)
    int minDifference=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]-arr[i+1]<minDifference){
            printf("%d %d\n",arr[i],arr[i+1]);
        }
    }
}