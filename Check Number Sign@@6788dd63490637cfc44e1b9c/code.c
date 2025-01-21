#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number>0){
        printf("Positive",number);
    }
    else if(number<0){
        printf("Negative",number);
    }
    else{
        printf("Zero",number);
    }
    return 0;
}