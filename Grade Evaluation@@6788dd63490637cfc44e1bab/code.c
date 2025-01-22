#include <stdio.h>
int main(){
    int grades;
    scanf("%d",&grades);
    switch(grades){
        case 'A':
        case 'a':
        printf("Excellent\n");
        break;
        case 'B':
        case 'b':
        printf("Good\n");
        break;
        case 'C':
        case 'c':
        printf("Average\n");
        break;
        case 'D':
        case 'd':
        printf("Below Average\n");
        break;
        case 'F':
        case 'f':
        printf("Fail\n");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}