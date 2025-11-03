#include<stdio.h>

void main(){
    float pi = 3.14,radius,area;
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf("the area of the circle is %f",area);
}