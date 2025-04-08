#include<stdio.h>
#include<string.h>

struct MovieTicket{
    char movie[100];
    char type[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);

    struct MovieTicket movies[n];
    float standardTotal=0;
    float premiumTotal=0;
    float vipTotal=0;

    for(int i=0;i<n;i++){
        scanf("%s %s %d",&movies[i].movie,&movies[i].type,&movies[i].price);
    }

    for(int i=0;i<n;i++){
        if(strcmp(movies[i].type,"Standard")==0){
            standardTotal+=movies[i].price;
        }
        else if(strcmp(movies[i].type,"Standard")==0){
            premiumTotal+=movies[i].price;
        }
        else{
            vipTotal+=movies[i].price;
        }
    }
        printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",standardTotal,premiumTotal,vipTotal);
        return 0;

}