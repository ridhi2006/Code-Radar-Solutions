#include <stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];

    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    int i=0;
    while(str1[i]!='\0' && str1[i]!='\n'){
        i++;
    }
    int j=0;
    while(str2[i]!='\0' && str2[i]!='\n'){
        str1[i++]=str2[j++];
    }
    str1[i]='\0';
    printf("%s",str1);

    return 0;
}