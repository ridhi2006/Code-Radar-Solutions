#include<stdio.h>
int isPrime(int n){
    int flag=0;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag==0;
        }
        else{
            flag==1;
        }
    }
    return flag;
}
int main(){
    int n;
    scanf("%d",&n);
    if(flag==0){
        printf(1);
    }
    else{
        printf(0);
    }
    return 0;
}
