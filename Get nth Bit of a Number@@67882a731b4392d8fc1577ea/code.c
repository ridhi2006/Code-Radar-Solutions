#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int nth_bit=((num>>n)&1);
    printf("%d\n",nth_bit);
    return 0;
}