//Takes Nothing Returns Something
#include<stdio.h>
void main(){
    int c;
    c=add();
    printf("Sum is %d\n",c);
}
int add(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    return (a+b);
}