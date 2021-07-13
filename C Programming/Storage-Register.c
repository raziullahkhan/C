#include<stdio.h>
int main(){
    register int x=4;
    int y;
    y=x++;
    x--;
    y=x+5;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}