#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int even_largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>even_largest){
                even_largest=arr[i];
            }
        }
    }
    if(even_largest=-1){
        printf(-1);
    }
    else{
        printf("%d",even_largest);
    }
    return 0;
}
































































)