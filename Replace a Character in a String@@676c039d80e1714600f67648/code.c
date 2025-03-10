#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char a;
    scanf("%c",&a);
    char b;
    scanf("%c",&b);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==a){
            string[i]=b;
        }
    }
    printf("%s",string);
    return 0;

}