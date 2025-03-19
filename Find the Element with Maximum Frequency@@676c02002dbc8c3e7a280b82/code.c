#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int mostfreq;
    int maxcount=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }}
    for(int i=0;i<n;i++){
        if(count>maxcount){
            maxcount=count;
            mostfreq=arr[i];
        }
    }
    printf("%d",mostfreq);
    return 0;
    
}