#include <stdio.h>
int main(){
    int number1,number2;
    scanf("%d%d",&number1,&number2);
    if(number1>=number2){
        printf("Yes",number1);
    }
    else{
        printf("No",number2);
    }
    return 0;
}