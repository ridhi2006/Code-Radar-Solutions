#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){ //outer loop:selects each element
        for(int j=i+1;j<n;j++){ //inner loop: compares with next elements
        
        if(arr[i]==arr[j]){
            printf("%d\n",arr[i]);
            return 0;}}
        
    }
    return 0;
}