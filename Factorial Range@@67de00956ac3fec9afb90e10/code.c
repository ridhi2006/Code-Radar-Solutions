#include<stdio.h>
long long factorialRange(int n){
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;

    }
    return fact;
}