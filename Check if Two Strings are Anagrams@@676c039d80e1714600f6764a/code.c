#include<stdio.h>
int main(){
    char s1[100],s2[100],freq[256]={0};
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);

    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,'\n')]='\0';

    if(strlen(s1)!=strlen(s2)){
        printf("No\n");
        return 0;
    }
    for(int i=0;s1[i];i++){
        freq[s1[i]]++;
        freq[s2[i]]--;

    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
