#include<stdio.h>
#include<string.h>
struct Student{
    int rollNumber;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);

    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f\n",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }

    float minimumMarks=students[0].marks;
    for(int i=1;i<n;i++){
        if(students[i].marks<minimumMarks){
            minimumMarks=students[i].marks;
        }
    }
    for(int i=0;i<n;i++){
        if(students[i].marks==minimumMarks){
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollNumber,students[i].name,students[i].marks);
    }}
    return 0;
}