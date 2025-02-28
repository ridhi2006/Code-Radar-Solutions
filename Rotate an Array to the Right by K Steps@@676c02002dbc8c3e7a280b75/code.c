#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=k%n;
    int temp[n];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k]
    }
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
