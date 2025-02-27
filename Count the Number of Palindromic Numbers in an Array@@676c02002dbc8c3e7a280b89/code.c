#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
    int num=arr[i];
    int original=num;
    int rem;
    int r=0;
    while(num!=0){
        rem=num%10;
        r=r*10+rem;
        num=num/10;
    }
    int x=num;
    if(original==r){
        count++;
    }
}
printf("%d\n",count);
return 0;}