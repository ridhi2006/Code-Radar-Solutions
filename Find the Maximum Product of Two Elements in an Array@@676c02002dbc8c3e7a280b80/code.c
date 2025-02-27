#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxProduct=0;
    for(int i=0;i<n;i++){
        if(arr[i]*arr[i+1]>maxProduct){
            maxProduct=i*(i+1);
        }

    }
    printf("%d ",maxProduct);
    return 0;

}