#include<stdio.h>
# define sum(a,b) a+b
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("sum of %d and %d is %d",a,b,sum(a,b));
    return 0;
}