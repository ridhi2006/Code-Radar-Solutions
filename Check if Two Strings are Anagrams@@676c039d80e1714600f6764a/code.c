#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char string2[100];
    fgets(string,sizeof(string2),stdin);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==string2[i]){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}