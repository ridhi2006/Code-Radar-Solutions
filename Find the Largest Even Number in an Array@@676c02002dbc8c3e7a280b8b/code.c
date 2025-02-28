#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even_largest=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(even_largest==-1 || arr[i]>even_largest){
                even_largest=arr[i];
            }
        }
    }
        printf("%d\n",even_largest);
    
    return 0;
}
































































