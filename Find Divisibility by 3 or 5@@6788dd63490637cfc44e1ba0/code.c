#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%5==0){
        printf("Divisible by Both",num);
    }
    else if(num%3==0){
        printf("Divisible by 3",num);
    }
    else if(num%5==0){
        printf("Divisible by 5",num);
    }
    else{
        printf("Not Divisible",num);
    }
    return 0;
}