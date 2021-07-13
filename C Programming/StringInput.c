#include<stdio.h>
#include<string.h>
void main(){
    char s[20];
    printf("Enter your name: ");
    //scanf("%s",&s[0]);//Terminates with Space, Tab and Enter Key.
    gets(s);
    puts(s);

}