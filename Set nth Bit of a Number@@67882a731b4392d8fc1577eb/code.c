#include<stdio.h>
int main(){
    int num1,n;
    scanf("%d %d",&num1,&n);
    int result=(num1|(1<<n));
    printf("%d",result);
    return 0;
    
}