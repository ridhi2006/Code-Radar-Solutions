#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    int maxFrequent=0;
    for(int i=0;string[i]!='\0';i++){
        if(maxFrequent>string[i]){
            maxFrequent=string[i];
        }
    }
    printf("%d",maxFrequent);
    return maxFrequent;
}