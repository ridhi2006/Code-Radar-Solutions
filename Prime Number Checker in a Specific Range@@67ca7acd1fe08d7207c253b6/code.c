#include<stdio.h>
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(i<2){
            continue;
        }
    
    int flag=1;
    for(int j=2;j<i;j++){
        if(i%j==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("%d ",i);
        found=1;
    }
}if(!found){
    printf("No prime numbers");
}


}
