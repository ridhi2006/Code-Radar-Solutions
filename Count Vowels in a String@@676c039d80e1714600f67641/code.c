#include <stdio.h>
int countVowels(char string[],int count=0){
    for(int i=0;string[i]='\0';i++){
        char ch;
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            count++;
        }
    }
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    countVowels(string);
    printf("%s\n",string);
    return 0;
}