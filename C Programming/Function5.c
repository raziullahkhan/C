//Takes Something Returns Something
#include<stdio.h>
void main(){
    int a,b,s;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    s=add(a,b);
    printf("Sum is %d",s);
}
int add(int x,int y){
    return (x+y);
}