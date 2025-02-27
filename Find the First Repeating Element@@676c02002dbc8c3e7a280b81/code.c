#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int minIndex=0;
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minIndex]){
           minIndex=i;
        }
    }printf("%d ",minIndex);
    return 0;
    
}