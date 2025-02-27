#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("0");
        return 0;
    }
    int maxProduct=arr[0]*arr[1];
    for(int i=1;i<n-1;i++){
        if(arr[i]*arr[i+1]>maxProduct){
            maxProduct=arr[i]*arr[i+1];
        }

    }
    printf("%d ",maxProduct);
    return 0;

}