#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]!='a'||string[i]!='e'||string[i]!='i'||string[i]!='o'||string[i]!='u'||string[i]!='A'||string[i]!='E'||string[i]!='I'||string[i]!='O'||string[i]!='U'){
            string[i]--;
        }
    }
    printf("%s",string);
    return 0;
}