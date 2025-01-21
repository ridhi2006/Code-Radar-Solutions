#include<stdio.h>
int main(){
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
        printf("Profit",sp);
    }
    else if(cp>sp){
        printf("Loss",cp);
    }
    else{
        printf("No Profit No Loss",cp,sp);
    }
    return 0;
}