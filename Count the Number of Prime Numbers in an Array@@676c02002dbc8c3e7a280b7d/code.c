#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        
    int count=0;
    int isPrime=1;
    for(int i=2;i<arr[i];i++){
        if(n%arr[i]==0){
            isPrime=1;
            count++;
            break;

        }
    }
    printf("%d",count);
    return 0;

}