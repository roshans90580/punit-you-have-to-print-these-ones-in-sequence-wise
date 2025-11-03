#include<stdio.h>
void main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(num%5==0){
        printf("no is div by 5 %d",num); 
    } else if(num%11==0){
        printf("no is div by 11 %d",num);
    } else{
        printf("no is not div by 11 or 5%d ",num);
    }
}