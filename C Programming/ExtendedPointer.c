#include<stdio.h>
int main(){
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    ***r=7;
    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d",***r);
    return 0;
}