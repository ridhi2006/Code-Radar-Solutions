#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int majorityelement=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i]==arr[i-1]){
            majorityelement=arr[i];
            break;
        }
        else{
            majorityelement=-1;
        }
    }
    printf("%d",majorityelement);
    return 0;
}