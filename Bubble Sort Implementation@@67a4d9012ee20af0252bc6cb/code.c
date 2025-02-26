#include<stdio.h>
void bubbleSort(int arr[],int n,int sortedArray[]){
    for(int i=0;i<n;i++){
        sortedArray[i]=arr[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(sortedArray[j]>sortedArray[j+1]){
                temp=sortedArray[j];
                sortedArray[j]=sortedArray[j+1];
                sortedArray[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
    printf("/n");
}

