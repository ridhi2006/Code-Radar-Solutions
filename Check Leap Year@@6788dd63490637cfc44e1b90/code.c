#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%100==0 &&(a%400!=0 || a%4==0)){
        printf("Leap Year",a)
    }
    else{
        printf("Not a Leap Year",a)
    }
    return 0;
}