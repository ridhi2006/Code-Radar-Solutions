#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1]!=arr[i]){
        int temp=arr[arr[i]-1];
        arr[arr[i]-1]=arr[i];
        arr[i]=temp;
    }}
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d\n",i+1);
            return 0;
        }
    }
    printf("%d\n",n+1);
    return 0;
}