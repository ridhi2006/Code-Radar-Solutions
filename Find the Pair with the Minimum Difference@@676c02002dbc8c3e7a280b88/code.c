#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mindiff=INT_MAX;
    int num1=0;
    int num2=0;
    for(int i=0;i<n;i++){
        int diff=arr[i+1]-arr[i];
        if(diff<mindiff){
            mindiff=diff;
            num1=arr[i];
            num2=arr[i+1];
        }
    }
    printf("%d %d",num1,num2);
    return 0;
}