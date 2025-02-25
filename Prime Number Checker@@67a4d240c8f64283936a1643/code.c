#include<stdio.h>
int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int flag=isPrime(n);
    if(flag==1){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
