#include <stdio.h>
#include<string.h>
int stringPalindrome(char string[]){
    int a,x,rem,rev=0;
    while(a!=0){
        a%10==0;
        rev=rev*10+rem;
        a/10==0;
    }
    if(a==rev){
        printf("Yes",a);
    }
    else{
        printf("No",a);
    }
    return a;



}
int main(){
    char string[100];
    fgets(string,strlen(string),stdin);
    string[strcspn(string,"\n")='\0'];
    stringPalindrome(string);
    printf("%s\n",string);
    return 0;
}
