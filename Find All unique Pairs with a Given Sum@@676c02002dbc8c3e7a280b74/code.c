#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==t){
            printf("%d %d\n",arr[i],arr[i+1]);
            return 0;
        }
    }
   return 0;

}