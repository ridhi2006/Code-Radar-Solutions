#include<stdio.h>
int isPrime(int n,int flag){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}
int main(){
    int n;
    scanf("%d",&n);
    if(flag==1){
        printf(1);
    }
    else{
        printf(0);
    }
    return 0;
}
