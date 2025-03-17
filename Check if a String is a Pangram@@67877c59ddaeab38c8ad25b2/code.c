#include<stdio.h>
#include<string.h>
int main(){
    char string[1000];
    fgets(string,sizeof(string),stdin);
    for(int i=0;i<strlen(string);i++){
        if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
    

}