#include<stdio.h>
#include<string.h>
struct Student{
    int rollNumber;
    char name[100];
    float marks;
    char grade;
};
char calculateGrade(float marks){
    if(marks>=85){
        return 'A';
    }
    else if(marks>=70 && marks<=84){
        return 'B';
    }
    else{
        return 'C';
    }
}
int main(){
    int n;
    scanf("%d",&n);

    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%d %s %f\n",&students[i].rollNumber,&students[i].name,&students[i].marks);
    
    students[i].grade=calculateGrade(students[i].marks);}
    for(int i=0;i<n;i++){
        printf("Roll Number: %d,Name: %s,Grade: %c\n",students[i].rollNumber,students[i].name,students[i].grade);
    }
    return 0;
}