#include <stdio.h>
int sortedArray(int arr[],int N){
    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[N-1]){
            return 0;
        }
    }
    return 1;

}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(sortedArray(arr,N)){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}