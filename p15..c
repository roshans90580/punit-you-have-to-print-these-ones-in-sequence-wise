#include<stdio.h>
void main(){
    char ch;
    printf("enter a letter : ");
    scanf("%c",&ch);
    if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch='U') {
        printf("it is a vowel");
    } else {
        printf("it is not a vowel");
    }
}