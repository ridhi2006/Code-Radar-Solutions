#include <stdio.h>
#include<string.h>
int countWords(char string[]){
    int count=0;int inWord=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==' '||string[i]=='\t'||string[i]=='\n'){
            inWord=0;
        }
        else if(string[i]==0){
            inWord=1;
            count++;
        }
    }
    return count;
}
int main(){
    char string[1000];
    scanf("%d",&string);
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    countWords(string);
    printf("%d\n",string);
    return 0;

}