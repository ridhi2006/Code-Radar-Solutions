#include<stdio.h>
void swap(int *a,int *b){               
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int binarySearch(int n,int arr[],int t){
    int found;
    int index=-1;
    bubbleSort(int arr[],int n);
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            index=i;
            found=1;
        }
        if(found==1){
            printf("%d ",i);
        }
        if(!found){
            printf("-1");
        }

    }
    
}