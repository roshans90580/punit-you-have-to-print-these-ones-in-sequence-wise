#include<stdio.h>
void main(){
    float a1,celsius,fahrenheit;
    printf("enter the temprature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; 
    printf("temprature in fahrenheit is: %f", fahrenheit);

}