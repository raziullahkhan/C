//Takes Something Returns Nothing
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y){
    int s;
    s=x+y;
    printf("Sum is %d",s);
}