#include <stdio.h>
int main(){
    char alphabet;
    if(alphabet>='A'' && alphabet<='Z'){
        printf("Uppercase",alphabet);
    }
    else if(alphabet>='a' && alphabet<='z'){
        printf("Lowercase",alphabet);
    }
    else{
        printf("Not an alphabet",alphabet);
    }
    return 0;
}
