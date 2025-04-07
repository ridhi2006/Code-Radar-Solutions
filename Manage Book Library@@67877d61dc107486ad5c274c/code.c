#include<stdio.h>
#include<string.h>
struct Book{
    char title[100];
    char author[100];
    int price;
};
int main(){
    int n;
    scanf("%d\n",&n);

    struct Book book[n];

    for(int i=0;i<n;i++){
        scanf("%s %s %d\n",&book[i].title,&book[i].author,&book[i].price);
    }

    int threshold;
    scanf("%d\n",&threshold);

    for(int i=0;i<n;i++){
        if(threshold>=book[i].price){
            threshold=book[i].price;
        }
    }
    for(int i=0;i<n;i++){
        printf("Books above price %d:",threshold);
        printf("Title: %s, Author: %s, Price: %d\n",book[i].title,book[i].author,book[i].price);
    }
    return 0;
}

