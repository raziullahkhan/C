#include<stdio.h>
struct date{
    int d,m,y;
};
int main(){
    struct date today;
    printf("Enter Today Date: ");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y);
    printf("Today Date: %d/%d/%d",today.d,today.m,today.y);
}