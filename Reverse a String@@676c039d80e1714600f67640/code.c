#include <stdio.h>
#include<string.h>
int main(){
    char string[100];
    int start=0;
    int end=strlen(string)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;

    }
}