#include<stdio.h>
void f1();
int main(){
    f1();
    f1();
}
void f1(){
    static int x;
    x++;
    printf("%d\n",x);
}