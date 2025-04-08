#include<stdio.h>
#include<string.h>
struct Day{
    char dayName[100];
    int temp;
};
int main(){
    int n=7;

    struct Day days[7];

    float totalTemp=0.0;

    for(int i=0;i<n;i++){
        scanf("%s %d",days[i].dayName,&days[i].temp);
        totalTemp += days[i].temp;
    }

    float average=totalTemp/n;

    printf("Average Temperature: %.2f\n",average);
    return 0;
}