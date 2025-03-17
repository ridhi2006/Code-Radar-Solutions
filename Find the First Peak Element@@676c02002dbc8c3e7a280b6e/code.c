#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int plement=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            plement=arr[i];
            break;
        }
        else if(arr[i]<max){
            max=arr[i];
            plement=max;
        }
        else{
            plement=-1;
        }
    }
    return plement;
    

}