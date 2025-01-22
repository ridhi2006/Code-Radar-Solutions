#include <stdio.h>
int main(){
    char action;
    scanf("%c",&action);
    switch(action){
        case 'R':
        case 'r':
        printf("Stop\n");
        break;
        case 'G':
        case 'g':
        printf("Go\n");
        break;
        case 'Y':
        case 'y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}