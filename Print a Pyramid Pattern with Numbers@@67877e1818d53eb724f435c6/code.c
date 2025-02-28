#include<stdio.h>
int main(){
    int n,i,j,spaces;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(spaces=1;spaces<=n-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}