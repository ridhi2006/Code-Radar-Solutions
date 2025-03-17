#include<stdio.h>
#include<string.h>
int main(){
    char string[1000];
    fgets(string,sizeof(string),stdin);
    int hasAlphabet=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z'){
            hasAlphabet=1;
            break;
        }
        
    }
    if(hasAlphabet){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    

}