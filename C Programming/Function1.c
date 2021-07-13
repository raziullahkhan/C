#include<stdio.h>
int main(){
    add();
    isEven();
    add();
    add();
    isEven();
}
void add(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}
void isEven(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even!",a);
    }
    else{
        printf("%d is odd!",a);
    }
}