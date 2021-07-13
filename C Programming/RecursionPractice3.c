//Fibonacci Series
#include<stdio.h>
int n;
void main(){
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("The First Fibonzacci Series are :");
    printf("%d %d ",0,1);
    series(0,1);
}
void series(int pre,int num){
    static int i=1;
    int pro;
    if(i==n){
        return;
    }
    else{
        pro=pre+num;
        pre=num;
        num=pro;
        printf("%d ",pro);
        i++;
        series(pre,num);
    }

}