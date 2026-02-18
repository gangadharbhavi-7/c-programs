#include<stdio.h>
int main(){
    int radius;
    float area, perimeter, pi=3.14;
    printf("Enter the radius of the circle:");
    scanf("%d", &radius);
    area = pi*radius*radius; 
    perimeter =2*pi*radius;
    printf("Area of the circle is : %.2f\n", area);
    printf("perimeter of the circle is : %.2f\n", perimeter);
    return 0;
}
