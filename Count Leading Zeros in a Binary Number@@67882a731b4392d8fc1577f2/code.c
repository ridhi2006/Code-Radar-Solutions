#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int count =0;
    //LOOP UNTIL MSB BECOMES 1//
    while((num & 0*80000000)==0){
        count++;
        num<<=1;//shift left by 1//
    }
    printf("%d\n",count);
    return 0;

}