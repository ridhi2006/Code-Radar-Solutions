#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int secondLargest=0;
    for(i=0;i<n;i++){
        if(arr[i]>arr[secondLargest+1]){
            secondLargest=i;
        }
    }
    for(int i=0;i<n;i++){
    printf("%d\n",arr[secondLargest]);}
    return 0;


}