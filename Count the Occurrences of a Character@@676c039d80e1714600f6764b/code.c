#include<stdio.h>
#include<string.h>
int countCharacter(char string[],char ch){
    int count=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==ch){
            count++;
        }
    }
    return count;
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    int times=countCharacter()
    printf("%d\n",times);
    return 0;
}