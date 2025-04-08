#include<stdio.h>
#include<string.h>
struct Employee{
    int employeeId;
    char name[100];
    int salary;
    float bonus;
};
float calculateSalary(int salary,float bonus){
    if(salary<50000){
        bonus=0.1*salary;
        return bonus;
    }
    else{
        bonus=0.05*salary;
        return bonus;
    }
}
int main(){
    int n;
    scanf("%d",&n);

    struct Employee employees[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f",&employees[i].employeeId,&employees[i].name,&employees[i].salary);
        employees[i].bonus=calculateSalary(salary,bonus);
    }

    for(int i=0;i<n;i++){
    printf("Employee ID: %d, Name: %s, Bonus: %f\n",employees[i].employeeId,employees[i].name,employees[i].bonus);}
    return 0;


}