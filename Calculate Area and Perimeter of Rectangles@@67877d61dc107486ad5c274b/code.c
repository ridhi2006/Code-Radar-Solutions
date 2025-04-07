#include<stdio.h>
#include<string.h>
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    int n;
    scanf("%d\n",&n);

    struct Rectangle rectangle[n];

    for(int i=0;i<n;i++){
        scanf("%d %d\n",&rectangle[i].length,&rectangle[i].breadth);
    }
    float area;
    float perimeter;
    int count=0;
    for(int i=0;i<n;i++){
        area=rectangle[i].length*rectangle[i].breadth;
        perimeter=2*(rectangle[i].length+rectangle[i].breadth);
        count++;
    }
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",count,area,perimeter);
    return 0;

    

}