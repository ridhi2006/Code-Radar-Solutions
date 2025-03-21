#include<stdio.h>
int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;i<sizeof(str2) && i<sizeof(str2);i++){
        if(str1[i]==str2[n-1]){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}