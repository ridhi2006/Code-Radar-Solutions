#include<stdio.h>
int main(){
    char string[1000];
    for(int i=0;i<string.length();i++)
    {scanf("%c",&string);
    }
    for(int i=0;i<string.length();i++){
        if(string.charAt(i)>='a' && string.charAt(i)<='z' || string.charAt(i)>='A' && string.charAt(i)<='Z'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
    

}