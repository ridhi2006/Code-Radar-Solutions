#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int count =0;
    if(num==0){
        printf("32\n");
        return 0;
    }
    //LOOP UNTIL MSB BECOMES 1//
    while((num & (1<<31))==0){
        count++;
        num<<=1;
    }
    printf("%d\n",count);
    return 0;

}