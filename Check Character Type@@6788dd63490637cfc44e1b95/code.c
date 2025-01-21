#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch==a|e|i|o|u){
        printf("Vowel",ch);
    }
    else if(ch!=a|e|i|o|u){
        printf("Constant",ch);
    }
    else if(ch>='0'&& ch<='9'){
        prinf("Digit",ch);
    }
    else{
        printf("Special Character",ch);
    }
    return 0;
}