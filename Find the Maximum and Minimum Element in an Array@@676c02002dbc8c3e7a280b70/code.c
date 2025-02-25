#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            printf("%d\n",arr[i]);
        }
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            printf("%d",arr[i]);
        }
    }
    return 0;
}