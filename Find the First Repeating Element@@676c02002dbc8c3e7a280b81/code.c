#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int minIndex=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(i<minIndex){
            count++;
        }
    }
    return count;
}