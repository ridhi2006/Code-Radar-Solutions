#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("A",marks);
    }
    else if(marks>=80 && marks<90){
        printf("B",marks);
    }
    else if(marks>=70 && marks<80){
        printf("C",marks);
    }
    else if(marks>=60 && marks<70){
        printf("D",marks);
    }
    else{
        printf("F",marks);
    }
    return 0;
}