#include<stdio.h>
#include<string.h>
void reverseString(char string[]){
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
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    reverseString(string);
    printf("%s\n",string);
    return 0;
}
