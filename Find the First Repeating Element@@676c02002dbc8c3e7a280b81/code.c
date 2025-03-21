#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            printf("-1");
        }
    }
    int mostRepeating=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]<mostRepeating){
           count++;
        }
        else{
            count--;
        }
    }printf("%d ",mostRepeating);
    return 0;
    
}