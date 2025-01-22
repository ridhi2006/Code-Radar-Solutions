#include <stdio.h>
#include<string.h>
int concatenateString(char string1[],char string2[]){
    int i=0;j=0;
    while(string1!='\0'){
        i++;
    }
    while(string2!='\0'){
        string1[i]=string2[j];
        i++;
        j++;
    }
    string1[i]='\0';
    return 0;
}
int main(){
    char string1[100];
    char string2[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    concatenateString(string1,string2);
    printf("%s\n",string1);
    printf("%s\n",string2);
    return 0;

}