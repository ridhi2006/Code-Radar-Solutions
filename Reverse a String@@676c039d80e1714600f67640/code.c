#include <stdio.h>
#include<string.h>
int main(){
    char string[];
    int start=0;
    int end=strlen(string)-1;
    while(start<end){
        char temp=string[start];
        string[start]=string[end];
        string[end]=temp;
        start++;
        end--;

    }
}