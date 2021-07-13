#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nBefore Swaping: a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping: a=%d and b=%d",a,b);
    return 0;
}
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}