#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int median;
    for(int i=0;i<n/2;i++){
        if(n%2==1){
            median=arr[n/2];
        }
        
    }
    printf("%d",median);
    return 0;
}