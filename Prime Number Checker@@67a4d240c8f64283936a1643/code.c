#include<stdio.h>
int isPrime(int n){

    if(n==1 || n==0)
      return 0;
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}
