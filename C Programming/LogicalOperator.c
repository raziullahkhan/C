#include<stdio.h>

void main(){
    int a,b,c;
    a=4<3||4>3;
    b=4<3&&4>3;
    c=!(4<3&&4>3);
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);

}