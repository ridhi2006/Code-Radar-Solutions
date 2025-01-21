#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    int numBits=sizeof(num1)*8;
    if(num >> (numBits-1) & 1){
        printf("Set",num1);
    }
    else{
        printf("Not Set",num1);
    }
    return 0;
}