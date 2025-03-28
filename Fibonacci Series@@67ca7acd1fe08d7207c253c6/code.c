#include<stdio.h>
int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    }