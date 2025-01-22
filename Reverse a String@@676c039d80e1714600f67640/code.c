#include <stdio.h>
int main(){
    char string[100];
    scanf("%d",&string);
    for(int i=0;i<len(string);i++){
        char reverse=string[:-i];
        printf("%d\n",reverse,string);
    }
    return 0;
}