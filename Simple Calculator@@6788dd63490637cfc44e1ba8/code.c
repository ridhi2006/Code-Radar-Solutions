#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char ch1;
    scanf("%c",&ch1)
        switch(ch1){
            case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*'
            printf("%d",a*b);
            break;
            case '/':
            if(b!=0){
            printf("%d\n",a/b);}
            else{
                printf("Division by zero is not allowed");
            }
            break;
            default:
            printf("Invalid operator");
            break;
        return 0;}

    

