#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       
        if(arr[i]==-1)
        continue;
        
    }
     int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
            arr[i+1]=-1;
        }
    }
    printf("%d %d\n",arr[i],count);
    return 0;
}