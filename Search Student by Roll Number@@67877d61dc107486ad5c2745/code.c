#include<stdio.h>
#include<string.h>
struct Student{
    int rollNumber;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d\n",&n);

    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f\n",&students[i].rollNumber,&students[i].name,&students[i].marks);
        scanf("%d\n",&students[i].rollNumber);
    }
    for(int i=0;i<n;i++){
        if(i==n){
            printf("Roll Number: %d,Name: %s, Marks: %.2f\n",students[i].rollNumber,students[i].name,students[i].marks);
        }
        else{
            printf("Student not found");
        }
    }
    return 0;

}