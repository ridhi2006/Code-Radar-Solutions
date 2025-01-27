#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1-n;j>=i;j--){
            if((i+j)%2==0){
                printf("A ");
            }
            else{
                printf("B ");
            }
            printf("\n");
        }
        
    }
    return 0;
}