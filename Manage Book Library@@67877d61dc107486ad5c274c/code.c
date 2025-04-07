#include<stdio.h>
#include<string.h>
struct Book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    int n;
    scanf("%d\n",&n);

    struct Book book[n];

    for(int i=0;i<n;i++){
        scanf("%s %s %f",&book[i].title,&book[i].author,&book[i].price);
    }

    float threshold;
    scanf("%f",&threshold);
    int found=0;
    printf("Books above price %.2f:\n",threshold);
    for(int i=0;i<n;i++){
        if(threshold<book[i].price){
            threshold=book[i].price;
            found=1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        printf("Title: %s, Author: %s, Price: %.2f\n",book[i].title,book[i].author,book[i].price);
    }
    return 0;
}

