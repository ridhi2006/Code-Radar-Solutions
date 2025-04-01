#include <stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=65;i<=68;i++){
        for(j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}