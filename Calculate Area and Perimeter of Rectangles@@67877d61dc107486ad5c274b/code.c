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
    for(int i=0;i<n;i++){
        area=rectangle[i].length*rectangle[i].breadth;
        perimeter=2*(rectangle[i].length+rectangle[i].breadth);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,area,perimeter);}
    return 0;

    

}