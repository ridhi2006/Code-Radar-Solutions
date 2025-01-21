#include <stdio.h>
int main(){
    int temperature;
    scanf("%d",&temperature);
    if(temperature<=0){
        printf("Freezing",temperature);
    }
    else{
        printf("Above Freezing",temperature);
    }
    return 0;
}