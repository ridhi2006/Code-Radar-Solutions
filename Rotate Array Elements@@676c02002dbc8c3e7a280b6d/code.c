#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n; //handle cases when k>n
    int temp[n];
    for(int i=0;i<k;i++){  
        temp[i]=arr[n-k+i];  //store last k elements in temp[]
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];   //shift elements to right
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i]; //copy temp[] back to arr[]
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}