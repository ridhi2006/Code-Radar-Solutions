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
    int num=arr[i];
    for(int i=0;i<n;i++){
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10; 
    }
    newArr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d",newArr[i]);
    }
    return 0;
}