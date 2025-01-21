#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("Valid",a,b,c);
    }
    else{
        printf("Invalid",a,b,c);
    }
    return 0;
}