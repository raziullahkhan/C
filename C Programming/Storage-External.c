#include<stdio.h>
void f1();
int main(){
    extern int x;
    printf("x=%d\n",x);
    f1();
    printf("x=%d\n",x);
    return 0;
}
int x;
void f1(){
    x++;
    printf("x=%d\n",x);
}