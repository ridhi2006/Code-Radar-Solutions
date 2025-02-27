#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int runningSum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&runningSum[i]);
    }
    int nums[]=new int[n];
    runningSum[0]=nums[0];
    for(int i=0;i<n;i++){
    runningSum[i]=runningSum[i-1]+nums[i];
    }
    return runningSum;
}