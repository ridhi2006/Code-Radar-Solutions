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

    float thresholdMarks;
    scanf("%.1f\n",&thresholdMarks);

    int count=0;

    for(int i=0;i<n;i++){
        if(students[i].marks>thresholdMarks){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d\n",thresholdMarks,count);
    return 0;}