#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[20];
    FILE *fp;
    fp=fopen("f1.txt","a");
    printf("Enter Last Name: ");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}