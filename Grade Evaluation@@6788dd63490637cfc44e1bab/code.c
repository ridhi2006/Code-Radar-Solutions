#include <stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
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
        printf("Invalid grade");}
        return 0;


    }