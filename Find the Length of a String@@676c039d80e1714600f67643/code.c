#include<stdio.h>
int main(){
    char string[l];
    scanf("%s",&string);
    int length=0;
    for(int i=0;string[i]!='\0';i++){
        length++;
    }
    printf("%d\n",length);
    return 0;
}