#include<stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1-rows;j>=1;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}