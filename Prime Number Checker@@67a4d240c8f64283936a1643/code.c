#include<stdio.h>
int isPrime(int n){
    int flag=1;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}
