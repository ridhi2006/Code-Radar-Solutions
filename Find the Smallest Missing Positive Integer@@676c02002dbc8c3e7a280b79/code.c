#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d\n",i+1);
        }
    }
    printf("%d\n",n+1);
    return 0;
}