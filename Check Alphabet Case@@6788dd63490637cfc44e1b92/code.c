#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A'' && ch<='Z'){
        printf("Uppercase",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase",ch);
    }
    else{
        printf("Not an alphabet",ch);
    }
    return 0;
}
