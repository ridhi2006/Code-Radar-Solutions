#include<stdio.h>
int main(){
    int i,j,n,spaces;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(spaces=1;spaces<=n-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}