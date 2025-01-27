#include <stdio.h>
int main(){
    int i,j,rows,space;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        printf(" ")
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf(" \n");
    }
    return 0;
}