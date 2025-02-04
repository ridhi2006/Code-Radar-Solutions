#include <stdio.h>
#include<string.h>
#include<stdbool.h>
bool areAnagrams(char string1[],char string2[]){
    if(strlen(string1)!=strlen(string2)){
        return false;
    }
    int count[256]={0};
    for(int i=0;string1!='\0';i++){
        count[(int)string1[i]]++;
        count[(int)string2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char string1[100];
    char string2[100];
    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);
    string1[strcspn(string1,"\n")]=0;
    string2[strcspn(string2,"\n")]=0;
    if(areAnagrams(string1,string2)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}