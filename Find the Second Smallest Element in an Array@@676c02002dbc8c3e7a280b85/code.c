#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            printf("-1");
        }
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    int secondMin=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<secondMin && arr[i]!=min){
            secondMin=arr[i];
        }
    }
    printf("%d ",secondMin);
    return 0;
}