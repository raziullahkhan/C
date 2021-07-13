#include<stdio.h>
int main(){
    int a,b,c;
    FILE *fp;
    fp=fopen("f1.txt","r");
    fscanf(fp,"%d %d %d",&a,&b,&c);
    printf("Sum of %d,%d and %d is %d",a,b,c,a+b+c);
    fclose(fp);
}