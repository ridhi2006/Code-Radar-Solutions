#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char string2[100];
    int j=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]!='\t' || string[i]!='\n'|| string[i]!=' '){
            string2[j]=string[i];
            j++;
        }
    }
    string2[j]='\0';
    printf("%s\n",string2);
    return 0;
}