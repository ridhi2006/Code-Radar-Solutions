#include<stdio.h>
#include<string.h>
struct Vehicle{
    char vehicleNumber[100];
    char vehicleType[100];
    float toll;
};
int main(){
    int n;
    scanf("%d",&n);

    struct Vehicle vehicles[n];

    int car=0;
    int truck=0;
    int bike=0;

    for(int i=0;i<n;i++){
        scanf("%s %s %f",&vehicles[i].vehicleNumber,&vehicles[i].vehicleType,&vehicles[i].toll);
    }

    for(int i=0;i<n;i++){
        if(strcmp(vehicles[i].vehicleType,"Car")==0){
            car+=vehicles[i].toll;
        }
        else if(strcmp(vehicles[i].vehicleType,"Bike")==0){
            bike+=vehicles[i].toll;
        }
        else{
            truck+=vehicles[i].toll;
        }

    }

   printf("Cars: %.2f, Trucks: %.2f, Bikes:%.2f",car,truck,bike);
    return 0;
}