#include<stdio.h>
#include<string.h>
struct Vehicle{
    char vehicleNumber[100];
    char vehicleType[100];
    int toll;
};
int main(){
    int n;
    scanf("%d",&n);

    struct Vehicle vehicles[n];

    for(int i=0;i<n;i++){
        scanf("%s %s %d",&vehicles[i].vehicleNumber,&vehicles[i].vehicleType,&vehicles[i].toll);
    }

    for(int i=0;i<n;i++){
        printf("%s: %f",vehicles[i].vehicleType,vehicles[i].vehicleNumber);
    }
    return 0;
}