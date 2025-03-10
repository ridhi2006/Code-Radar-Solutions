#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int isBinary=1;
    fgets(string,sizeof(string),stdin);
    for(int i=0;string[i]!='\0' && string[i]!='\n';i++){
        if(string[i]!='0' || string[i]!='1'){
           isBinary=0;
           break;
        }
    }
    if(isBinary){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}