#include<stdio.h>
int main(){
    int i,n,oddcount=0,evencount=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d\n",evencount,oddcount);
    return 0;
}