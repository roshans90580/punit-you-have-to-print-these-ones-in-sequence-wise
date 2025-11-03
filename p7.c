#include<stdio.h>
void main(){
    int a,b;
    printf("enter 2 numbers :");
    scanf("%d %d",&a,&b);
        if(a>b){
            printf("a is greater then b %d",a>b);
    }else{
        printf("b is greater then a %d",a<b);
    }
}