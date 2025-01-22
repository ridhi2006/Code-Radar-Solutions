#include <stdio.h>
#include<string.h>
int lengthString(char string[]){
    int length=0;
    for(int i=0;strlen(string)!='\0';i++){
        if(string==' '|| string=='\n'|| string='\t'){
            return 0;
        }
        else{
            return 1;
        }
        length++;
    } return length;

}
int main(){
    char string[100];
    scanf("%c",&string);
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    lengthString(string)
    printf("\n",string);
    return 0;
}