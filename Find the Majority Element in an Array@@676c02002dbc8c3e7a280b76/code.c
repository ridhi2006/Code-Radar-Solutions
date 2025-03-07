#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<n;i++){
         int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
            count++;}
        }
    }
    for(int i=0;i<n;i++){
    if(count<n/2){
        printf("%d",arr[i]);
        return 0;
        
    }else{
   printf("-1\n");
   return 0;}}
}