#include<stdio.h>
int main(){
    int arr[n];
    int n=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            printf("%d",arr[i]);
        }
    }
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            printf("%d",arr[i]);
        }
    }
    return 0;
}