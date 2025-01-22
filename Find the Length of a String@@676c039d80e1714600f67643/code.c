#include <stdio.h>
#include<string.h>
int lengthString(char string[]){
    int length=0;
    for(int i=0;string[i]!='\0';i++){
        length++;
    } 
    return length;
}
int main(){
    char string[5];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    int length=lengthString(string);
    printf("%s\n",string);
    printf("%d\n",length);
    return 0;
}