#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1==num2*num2){
        printf("Yes",num1);
    }
    else{
        printf("No",num2);
    }
    return 0;
}