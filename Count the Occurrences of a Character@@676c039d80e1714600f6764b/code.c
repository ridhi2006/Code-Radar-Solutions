#include<stdio.h>
int countCharacter(char string[]){
    int count=0;
    for(int i=0;i<=1;i++){
        for(int j=1;i<=j;j++){
            count++;
        }
    }
    return count;
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn,"\n"]='\0';
    int times=countCharacter()
    printf("%d\n",times);
    return 0;
}