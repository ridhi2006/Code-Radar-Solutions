#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxdiff=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[n]=arr[i]<arr[n-1];
    }
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]>maxdiff){
            printf("%d %d",arr[i],arr[i+1]);
        }
    }
    printf("%d %d\n",arr[i],arr[i+1]);
    return 0;
}