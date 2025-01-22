#include <stdio.h>
#include<string.h>
int countVowels(char string[]){
    int count=0;
    for(int i=0;string[i]='\0';i++){
        char ch=string[i];
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            count++;
        }
    }
    return count;
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    int vowelCount=countVowels(string);
    printf("%d\n",vowelCount);
    return 0;
}