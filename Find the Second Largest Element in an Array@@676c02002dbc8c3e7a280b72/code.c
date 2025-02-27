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
        max=arr[i];}
    }
    int secondMax=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    if (secondMax == arr[0]) {
        printf("-1");
    } else{
        printf("%d", secondMax);
    }
    return 0;
}