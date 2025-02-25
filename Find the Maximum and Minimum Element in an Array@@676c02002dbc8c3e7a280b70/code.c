#include<stdio.h>
int main(){
    int arr[n];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            printf("%d\n",arr[i]);
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