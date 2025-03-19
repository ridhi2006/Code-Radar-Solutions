#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int maxfreq=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(count<maxfreq){
            arr[i]==maxfreq;
        }
    }
    printf("%d",maxfreq);
    return 0;


}