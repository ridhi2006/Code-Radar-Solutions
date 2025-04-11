#include<stdio.h>
#include<string.h>
void swap(char str1[],char str2[]){
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void selectionSort(char arr[][100],int n){
    int minIndex;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[minIndex])<0){
                minIndex=j;
            }}
                 if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
            }
        }
    }
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}