#include<stdio.h>
int main(){
    int x=5;
    int *j=&x;
    printf("%d %u\n",x,j);
    printf("%d %u\n",*j,&x);
    printf("%u",*&j);
    return 0;
}