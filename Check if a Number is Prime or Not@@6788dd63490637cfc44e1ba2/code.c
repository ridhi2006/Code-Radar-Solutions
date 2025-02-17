#include<stdio.h>
int main(){
    boolean flag= Prime;
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=Not Prime;
        }
    }
    printf("%d",&flag);
    return 0;

}