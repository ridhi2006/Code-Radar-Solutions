#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int majorityelement=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[n-1]==arr[i]){
            majorityelement=arr[i];
            count++;
        }
        
        }
    }
    if(count>n/2){
    printf("%d",majorityelement);}
    return 0;
}