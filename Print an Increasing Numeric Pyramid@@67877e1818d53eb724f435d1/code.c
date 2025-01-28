#include <stdio.h>
int main(){
    int i,j,rows,spaces;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(spaces=1;spaces<=n-i;spaces++){
        printf(" ");}
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n ");
    }
    return 0;
}