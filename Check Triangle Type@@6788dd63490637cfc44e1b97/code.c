#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
    if(a==b && b==c){
        printf("Equilateral",a,b,c);
    }
    else if(a==b || b==c || a==c){ 
        printf("Isosceles",a,b,c);
    }
    else{
        printf("Scalene",a,b,c);
    }}
    return 0;
}