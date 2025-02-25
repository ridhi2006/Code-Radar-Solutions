#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            printf("%d\n",arr[i]);
        }
        if(arr[i]<min){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}