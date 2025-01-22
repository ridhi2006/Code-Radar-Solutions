#include <stdio.h>
#include<string.h>
int concatenateString(char string1[],char string2[]){
    int i=0;int j=0;
    while(string1[i]!='\0'){
        i++;
    }
    while(string2[i]!='\0'){
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
    fgets(string1,sizeof(string1),stdin);
    string1[strcspn(string1,"\n")]='\0';
    fgets(string2,sizeof(string2),stdin);
    string2[strcspn(string2,"\n")]='\0';
    concatenateString(string1,string2);
    printf("%s\n",string1);
    return 0;

}