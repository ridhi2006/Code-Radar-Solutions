#include <stdio.h>
#include<string.h>
void removeConsonants(char string[]){
    char result[strlen(string)+1];
    for(int i=0;string[i]!='\0',i++){
        if(!(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O',string[i]=='U')){
            continue;
        }
        result[i]=string[i];
    }
    result[i]='\0';
    strcpy(string,result);
}
int main(){
    char string[100];
    fgets(string,sizeof(string),string);
    string[strcspn(string,"\n")]='\0';
    removeConsonants();
    printf("%s\n",string);
    return 0;
}