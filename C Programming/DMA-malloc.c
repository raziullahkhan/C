#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(4);
    *p=3;
    printf("%d",*p);
    free(p);
    return 0;
}