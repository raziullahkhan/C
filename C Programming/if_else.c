#include<stdio.h>
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a>0)
        printf("%d is positive number!",a);
    else
        printf("%d is non-positive number!",a);
    return 0;
}