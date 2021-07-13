#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Hello";
    char s2[]="hello";
    int l;
    l=strcmp(s1,s2);
    printf("%d",l);
    return 0;

}