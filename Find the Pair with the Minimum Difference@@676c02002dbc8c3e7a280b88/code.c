#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<1){
        printf("-1");
        return 0;
    }
    int *newArr = (int *)calloc(n, sizeof(int));
    int minDiff=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            arr[i]=newArr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(newArr[i+1]>newArr[i]){
            minDiff=newArr[i-1]-newArr[i];
        }
    }
    printf("%d %d\n",newArr[i],newArr[i-1]);
    return 0;
}