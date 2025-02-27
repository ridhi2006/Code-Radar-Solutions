#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int runningSum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int runningSum[n];
    runningSum[0]=nums[0];
    for(int i=1;i<n;i++){
    runningSum[i]=runningSum[i-1]+nums[i];
    }
    for(int i=0;i<n;i++){
    printf("%d ",runningSum);}
    return 0;
}