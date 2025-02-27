#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr[5];
    int sum=0;
    scanf("%d",&sum);
    int rem;
    for(int i=0;i<n;i++){
    while(arr[i]!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10; 
    }
    for(int i=0;i<n;i++){
        printf("%d",sum);
    }
    return 0;
}