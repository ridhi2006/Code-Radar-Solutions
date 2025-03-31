#include<stdio.h>
void swap(char *a,char *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}
