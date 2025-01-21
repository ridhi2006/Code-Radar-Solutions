#include <stdio.h>
int main(){
    int num1,num2;
    if(num1==num2){
        printf("Equal",num1,num2);
    }
    else if(num1>num2){
        printf("First",num1);
    }
    else{
        printf("Second",num2);
    }
    return 0;
}