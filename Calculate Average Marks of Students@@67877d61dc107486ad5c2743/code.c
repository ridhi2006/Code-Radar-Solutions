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
    int average;
    average=(students[i].marks+students[n-1].marks)/n;
    for(int i=0;i<n;i++){
        printf("Average Marks: %.2f\n",students[i].marks);
        
    }
    return 0;
}
