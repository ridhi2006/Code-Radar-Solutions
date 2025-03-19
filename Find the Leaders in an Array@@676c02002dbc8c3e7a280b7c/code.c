#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-2;i>=0;i--){
    if(arr[i]>arr[n-1]){
        printf("%d ",arr[i]);
    }
    }
    return 0;
}