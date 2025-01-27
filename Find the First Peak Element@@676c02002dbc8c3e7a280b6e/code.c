#include <stdio.h>
int firstPeak(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    for(int i=0;i<n;i++){
        if((i==0 & arr[i]>=arr[i+1])||(i==n-1 && arr[i]>=arr[i-1])||(arr[i]>=arr[i-1]
        && arr[i]>=arr[i+1])){
            return arr[i];
        }
    }
    return -1;

}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        return 1;
    }
    int arr[n];
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int peak=firstPeak(arr,n);
    printf("%d\n",peak);
    return 0;

}