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
    float totalMarks=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f\n",&students[i].rollNumber,&students[i].name,&students[i].marks);
        totalMarks+=students[i].marks;
    }

    float average=totalMarks/n;

    printf("Total Marks: %.2f\n",totalMarks);
    printf("Average Marks: %.2f\n",average);
    return 0;

}