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
        max=arr[i];}
    }
    int secondMax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
        else{
            secondMax=-1;
        }
    }
    printf(secondMax);
    return 0;


}