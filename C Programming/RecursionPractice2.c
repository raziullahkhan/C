//sum of first n natural numbers
#include<stdio.h>
void main(){
    printf("Enter any natural number: ");
    int n;
    scanf("%d",&n);
    int s=sum(n);
    printf("Sum of first %d naturals number = %d",n,s);
}
int sum(int t){
    int res;
    if(t==1){
        return 1;
    }
    else{
        res=t+sum(t-1);
    }
    return res;
}