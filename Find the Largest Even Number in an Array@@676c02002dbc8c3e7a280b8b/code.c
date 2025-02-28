#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<0){
        if(arr[i]<even_largest){
            even_largest=arr[i];
            found=1;
        }
    }
    int even_largest=0;
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>even_largest){
                even_largest=arr[i];
                found=1;
            }
        }
    }
    if(found){
        printf("%d",even_largest);
    }
    else{
        printf("-1");
    }
    return 0;
}
































































