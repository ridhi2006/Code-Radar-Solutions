#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    char string2[100];
    fgets(string2,sizeof(string2),stdin);
    string[strcspn(string, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    for(int i=0;string[i]!='\0';i++){
        if(strstr(string,string2)!= NULL){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}