#include<stdio.h>
void main(){
    int k;
    k=fun(4);
    printf("%d",k);
}
int fun(int a){
    int s;
    if(a==1)
        return a;
    s=a+fun(a-1);
    return s;
}