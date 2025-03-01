#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]>count){
            printf("%d",arr[i]);
        }
    }
    return 0;
}