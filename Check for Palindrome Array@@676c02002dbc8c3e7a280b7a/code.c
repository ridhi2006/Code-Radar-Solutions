#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int revArr[n];
    for(int i=0;i<n;i++){
    int revArr[i]=arr[n-1-i];
    }
    if(revArr[i]==arr[i]){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}