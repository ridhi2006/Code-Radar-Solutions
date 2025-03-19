#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int mostfreq=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mostfreq){
            mostfreq=arr[i];
        }
    }
    printf("%d",mostfreq);
    return 0;
    
}