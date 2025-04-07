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
    }

    int topperIndex=0;

    for(int i=1;i<n;i++){
        if(students[i].marks<students[topperIndex].marks){
            topperIndex=i;
        }
    }

    for(int i=0;i<n;i++){
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %f\n",students[topperIndex].rollNumber,students[topperIndex].name,students[topperIndex].marks);
    }
    return 0;



}