#include<stdio.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string, "\n")] = '\0'; //REmove newline chararcter
    char string2[100];
    fgets(string,sizeof(string2),stdin);
    string2[strcspn(string2, "\n")] = '\0';
    for(int i=0;string[i]!='\0';i++){
        if(strcmp(string,string2)==0){                                                                                                                                                                                                                                                                                           )string[i]==string2[i]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}