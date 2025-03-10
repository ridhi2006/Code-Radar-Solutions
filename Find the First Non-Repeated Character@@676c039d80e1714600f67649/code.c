#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]!=string[i+1]){
            printf("%s",string[i]);
        }
        else{
            printf("-");
        }
    }
    return 0;
}