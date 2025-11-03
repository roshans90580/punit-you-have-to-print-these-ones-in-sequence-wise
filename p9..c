#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("1. add\n 2. sub\n 3. mul\n 4. div\n 5. mod\n");
    scanf("%d", &c);
    printf("enter two numbers");
    scanf("%d %d", &a,&b);
    switch(c)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
        case 3:
        c=a*b;
        break;    
    case 4:
        c=a/b;
        break;
    case 5:
        c=a%b;
        break;
    default:
    printf("invalid input\n");
        break;
}
printf("the reslt is %d",d);
}