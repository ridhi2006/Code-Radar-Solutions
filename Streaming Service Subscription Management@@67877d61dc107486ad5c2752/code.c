#include<stdio.h>
#include<string.h>

struct Subscription{
    char username[100];
    char subscription[100];
    float subscriptionCost;
};

int main(){
    int n;
    scanf("%d",&n);

    struct Subscription subscribe[n];
    
    float basic=0.0;
    int basicCount=0;
    float premium=0.0;
    int premiumCount=0;
    float standard=0.0;
    int standardCount=0;

    for(int i=0;i<n;i++){
        scanf("%s %s %f",&subscribe[i].username,&subscribe[i].subscription,&subscribe[i].subscriptionCost);
    }

    for(int i=0;i<n;i++){
        if(strcmp(subscribe[i].subscription,"Basic")==0){
            basic+=subscribe[i].subscriptionCost;
            basicCount++;
        }
        else if(strcmp(subscribe[i].subscription,"Premium")==0){
            premium+=subscribe[i].subscriptionCost;
            premiumCount++;
        }
        else{
            standard+=subscribe[i].subscriptionCost;
            standardCount++;
        }
    }

   printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basic);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standard);
    printf("Premium: %d Users, Revenue: %.2f", premiumCount, premium);
    return 0;
}