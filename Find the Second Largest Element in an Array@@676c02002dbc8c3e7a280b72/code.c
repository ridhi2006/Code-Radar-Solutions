#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
        max=arr[i];}
    }
    int secondMax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    if(arr[i]==secondMax){
        printf("-1")
    }
    else{
    printf("%d",secondMax);}
    return 0;
}