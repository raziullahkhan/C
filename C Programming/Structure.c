#include<stdio.h>
struct date{
    int d,m,y;
};
int main(){
    struct date today={14,2,2021};
    printf("Today Date: %d/%d/%d",today.d,today.m,today.y);
    struct date d1;
    d1.d=15;
    d1.m=02;
    d1.y=2021;
    printf("\nTomorrow Date=%d/%d/%d",d1.d,d1.m,d1.y);
    struct date d2;
    d2=today;
    printf("\n%d/%d/%d",d2.d,d2.m,d2.y);

}