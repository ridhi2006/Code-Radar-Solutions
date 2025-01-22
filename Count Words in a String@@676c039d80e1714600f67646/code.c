#include <stdio.h>
#include<string.h>
int countWords(char string[]){
    int count=0;int inWord=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==' '||string[i]=='\t'||string[i]=='\n'){
            inWord=0;
        }
        else if(inWord==0){
            inWord=1;
            count++;
        }
    }
    return count;
}
int main(){
    char string[1000];
    scanf("%c",&string);
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    int count = countWords(string);
    printf("%d\n",count);
    return 0;

}