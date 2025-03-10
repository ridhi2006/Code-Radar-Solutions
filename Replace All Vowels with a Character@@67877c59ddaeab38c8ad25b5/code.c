#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char a;
    scanf("%c",&a);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]=='a'||'e'||'i'||'o'||'u'){
            string[i]=a;
        }
    }
    printf("%s",string);
    return 0;
}