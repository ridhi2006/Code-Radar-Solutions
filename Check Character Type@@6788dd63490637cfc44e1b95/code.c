#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel",ch);
    }
    else{printf("Consonant",ch);

    }}
    else if(ch>='0'&& ch<='9'){
        prinf("Digit",ch);
    }
    else{
        printf("Special Character",ch);
    }
    return 0;
}