//Takes Nothing Returns Nothing
#include<stdio.h>

void main(){
    add();
}
void add(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}