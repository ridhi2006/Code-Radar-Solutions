#include <stdio.h>
int main(){
    int age,status;
    scanf("%d%d",&age,&status);
    if(age>=18 && status==1){
        printf("Eligible",age,status);
    }
    else{
        printf("Not Eligible",age,status);
    }
    return 0;
}