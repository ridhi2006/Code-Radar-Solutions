#include <stdio.h>
void rotateArray(int arr[],int n,int k){
    if(n<=0)return;
    k=k%n;
    for(int i=0;j=n-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;j=k-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=k;j=n-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n,k;
    scanf("%d",&n) //input size of array//
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    rotateArray(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}


