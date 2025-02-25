#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int secondLargest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[secondLargest+1]){
            secondLargest=i;
        }
        else{
            printf("-1");
        }
    }
    printf("%d\n",secondLargest);
    return 0;


}