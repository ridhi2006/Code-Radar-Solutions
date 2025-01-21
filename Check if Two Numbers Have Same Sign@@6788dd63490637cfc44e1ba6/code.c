#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if((num1>0 && num2>0)||(num1<0 && num2<0)){
        printf("Same Sign",num1,num2);
    }
    else{
        printf("Different Sign",num1,num2);
    }
    return 0;
}