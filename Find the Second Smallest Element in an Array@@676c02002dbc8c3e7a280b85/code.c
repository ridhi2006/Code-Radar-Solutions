#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=i;
        }
    }
    int secondMin=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<secondMin && arr[i]!=min){
            secondMin=i;
        }
    }
    printf("%d ",secondMin);
    return 0;
}