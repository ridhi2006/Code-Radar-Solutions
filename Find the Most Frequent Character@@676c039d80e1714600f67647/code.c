#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    int maxFrequency=0;
    char mostFrequentCharacter ='\0';
    for(int i=0;string[i]!='\n'&& string[i]!='\0';i++){
        continue;
    int count=0;
    for(int j=0;string[j]!='\0'&& string[j]!='\n';j++){
        if(string[j]==string[i]){
            count++;
        }
    }
    if(count>maxFrequency){
        mostFrequentCharacter=string[i];
    }}
    return mostFrequentCharacter;
   
}