#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int newArr[n];
    int sum=0;
    scanf("%d",&sum);
    int rem;
    for(int i=0;i<n;i++){
    while(arr[i]!=0){
        rem=arr[i]%10;
        sum=sum+rem;
        arr[i]=arr[i]/10; 
    }}
    for(int i=0;i<n;i++){
        printf("%d",newArr[i]);
    }
    return 0;
}