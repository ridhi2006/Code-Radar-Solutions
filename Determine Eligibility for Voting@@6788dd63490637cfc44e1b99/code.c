#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible",age);
    }
    else{
        printf("Not Eligible",age);
    }
    return 0;
}