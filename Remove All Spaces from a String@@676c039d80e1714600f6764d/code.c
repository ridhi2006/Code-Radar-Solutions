#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char string2[100];
    for(int i=0;string[i]!='\0';i++){
        if(string[i]=='\t' || string[i]=='\n'|| string[i]==' '){
            char result=string2[100];
        }
    }
    printf("%s",result);
    return 0;
}