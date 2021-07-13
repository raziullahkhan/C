#include<stdio.h>
void main(){
    char s[10]={'W','O','R','L','D','\0'};
    int i;
    for(i=0;s[i]!='\0';i++){
        printf("%c",s[i]);
    }
}