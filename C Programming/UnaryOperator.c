#include<stdio.h>

void main(){
    int a=2,b,c;
    float f=4.2;
    double d=45.67;
    char ch='d';
    a++;//post Increment
    printf("a=%d",a);
    ++a;//Pre Increment
    printf("\na=%d",a);
    b=a++;//b=a
    printf("\nb=%d",b);
    b=++a;//b=a+1
    printf("\nb=%d",b);
    a--;//post Deccrement
    printf("\na=%d",a);
    --a;//Pre Deccrement
    printf("\na=%d",a);
    b=a--;//b=a
    printf("\nb=%d",b);
    b=--a;//b=a-1
    printf("\nb=%d",b);
    printf("\n%d ",sizeof(a));
    printf("%d ",sizeof(f));
    printf("%d ",sizeof(d));
    printf("%d",sizeof(ch));
}