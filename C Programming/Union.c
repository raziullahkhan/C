#include<stdio.h>
union data
{
    int x; float y;char z;
};

int main(){
    union data d;
    d.x=5;
    printf("%d",d.x);
    d.y=3.14;
    printf("\n%f",d.y);
    d.z='z';
    printf("\n%c",d.z);
    printf("\n%d",d.x);
    printf("\n%f",d.y);
    printf("\n%c",d.z);
    return 0;
        
}