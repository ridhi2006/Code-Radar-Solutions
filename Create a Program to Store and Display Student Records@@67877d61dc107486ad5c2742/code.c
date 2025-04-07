#include<stdio.h>
#include<string.h>
struct Students{
    int rollNumber;
    char name[100];
    float marks;

};
int main(){
    int n;
    scanf("%d\n",&n);

    struct Student students[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }

    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s,Marks: %f\n",students[i].rollNumber,students[i].name,students[i].marks);
    }
    return 0;
}