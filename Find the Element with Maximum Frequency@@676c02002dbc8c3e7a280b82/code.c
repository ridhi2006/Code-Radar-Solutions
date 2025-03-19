#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=arr[0];
    int freq=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>freq){
            max=arr[i];
        }
    }
    return 0;
    
}