#include<stdio.h>
#include<string.h>

void caesarCipher(char str[],int shift){
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];

        if(ch>='A' && ch<='Z'){
            str[i]=((ch-'A'+shift)%26)+'A';
        }
         else if (ch >= 'a' && ch <= 'z') {
            str[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
    }
}