#include<stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=65;i<=65+rows;i++){
        for(j=1;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}