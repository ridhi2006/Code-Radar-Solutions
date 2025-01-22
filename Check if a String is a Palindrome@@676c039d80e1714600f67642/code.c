#include <stdio.h>
#include<string.h>
int isPalindrome(char string[]){
    int length=strlen(string);
    for(int i=0;i<length/2;i++){
        if (string[i] != string[length-i-1])
        {return 0;}}
        return 1;
    }

int main(){
    char string[100];
    fgets(string,strlen(string),stdin);
    string[strcspn(string,"\n")='\0'];
    if (isPalindrome(string)){
        printf("Yes\n");
    }
    else{
        printf("No\n")
    }
    return 0;
}
