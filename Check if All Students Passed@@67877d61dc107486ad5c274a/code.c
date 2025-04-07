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
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }

    float threshold=50.00;
    for(int i=0;i<n;i++){
        if(students[i].marks>threshold){
            printf("All Passed");
        }
        else{
            printf("Not All Passes");
        }
    }
    return 0;
}