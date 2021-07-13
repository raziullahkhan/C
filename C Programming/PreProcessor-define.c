#include<stdio.h>
#define PI 3.14
int main(){
    int r;
    float a;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    a=PI*r*r;
    printf("Area of circle = %f",a);
    return 0;
}