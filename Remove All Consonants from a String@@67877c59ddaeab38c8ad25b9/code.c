#include <stdio.h>
int removeConsonants(char string[]){
    for(int i=0;string[i]!='\0',i++){
        if(!=(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]==' '||string[i]=='\n')){
            string[i]--
        }
    }
    return string[i];
}
int main(){
    char string[100];
    fgets(string,sizeof(string),string);
    string[strcspn(string,"\n")]='\0';
    scanf("%c",&string);
    printf("%c\n",string);
    return 0;
}