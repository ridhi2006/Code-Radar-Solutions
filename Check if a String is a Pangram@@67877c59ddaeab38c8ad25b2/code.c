#include<stdio.h>
#include<string.h>
int main(){
    char string[1000];
    fgets(string,sizeof(string),stdin);
    for(int i=0;i<strlen(string);i++){
        if(string.charAt(i)>='a' && string.charAt(i)<='z' || string.charAt(i)>='A' && string.charAt(i)<='Z'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
    

}