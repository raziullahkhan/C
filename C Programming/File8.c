#include<stdio.h>
int main(){
    int a,b;
    FILE *fp;
    fp=fopen("t1.txt","w");
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}