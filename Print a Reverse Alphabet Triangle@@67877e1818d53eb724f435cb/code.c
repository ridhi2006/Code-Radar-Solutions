#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=65+n;i>=65;i--){
        for(j=65;j<=i;j++){
                printf("%c ",j);
            }
            printf("\n");
        
    }
    return 0;
}