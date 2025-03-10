#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char ch=string[100];
    for(int i=0;string[i]!='\0';i++){
        if(ch>=97 && ch<=122){
            ch>=65 && ch<=90;
        }
    }
    printf("%s",string);
    return 0;
}