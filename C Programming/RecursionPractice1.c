//print n natural numbers;
#include<stdio.h>
int y=1;
void main(){
    int n;
    printf("Enter any numbers: ");
    scanf("%d",&n);
    printf("First n natural number: ");
    fun(n);
}
void fun(int n){
    if(y<=n){
        printf("%d ",y);
        y++;
        fun(n);
    }
}