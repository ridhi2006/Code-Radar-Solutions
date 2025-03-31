#include<stdio.h>
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i<2){
            continue;
        }
    }
    int flag=1;
    for(int j=2;j<i;j++){
        if(j%i==0){
            flag=0;
        }
    }

}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(flag==1){
        printf("%d ",i);
    }
    return 0;
}