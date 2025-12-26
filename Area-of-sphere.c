#include <stdio.h>
int main (){
    int r;
    printf("Enter the radius of sphere\n");
    scanf("%d", &r);
    float area = 4*3.14*r*r;
    printf("Area of sphere is %.2f\n", area);
    return 0;
}