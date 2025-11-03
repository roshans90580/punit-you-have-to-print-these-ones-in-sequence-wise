#include<stdio.h>

void main(){
    int n1,n2,add,sub,mul,div,modulus;
    printf("enter two digits :");
    scanf("%d %d",&n1,&n2 );
    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    modulus=n1%n2;
    printf("this is addition of a+b %d\n",add);
    printf("this is sub of a-b %d\n",sub);
    printf("this is  mul of a/b %d\n",div);
    printf("this is div of a*b %d\n",mul);
    printf("this is rem of a%b %d\n",modulus);

}