#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid array");
        return 1;
    }   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n],j=0;
    int zeroCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j++]=arr[i];
        }
        else{
            zerocount++;
        }
    }
    while(zerocount--){
        temp[j++]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}