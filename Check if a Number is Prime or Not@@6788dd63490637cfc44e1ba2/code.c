#include<stdio.h>
int main(){
    int flag=1;
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}