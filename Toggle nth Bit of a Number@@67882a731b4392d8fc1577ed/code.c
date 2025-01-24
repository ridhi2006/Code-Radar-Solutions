#include <stdio.h>
int main(){
    int num,n;
    scanf("%d%d",&num,&n);
    //Use XOR operation//
    int result=num^(n<<1);
    printf("%d\n",result);
    return 0;
}