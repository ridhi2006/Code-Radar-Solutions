#include <stdio.h>
#include<string.h>
int lengthString(char string[]){
    int length=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==' '|| string[i]=='\n'|| string[i]=='\t'){
            continue;
        }
        length++;
    } return length;

}
int main(){
    char string[100];
    scanf("%c",&string);
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    lengthString(string);
    printf("\n",string);
    return 0;
}