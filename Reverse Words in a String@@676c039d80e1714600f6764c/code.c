#include<stdio.h>
int reverseWords(char string[],int a,r=0,remainder){
    while(string[i]!='\0'){
        remainder=a%10;
        r=r*10+remainder;
        a=a/10;
    }

    }

}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    scanf("%c",&string);
    printf("%c",reverseWords());
    return 0;
}