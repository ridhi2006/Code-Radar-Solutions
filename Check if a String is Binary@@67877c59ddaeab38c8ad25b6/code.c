#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==0 || string[i]==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}