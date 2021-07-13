#include<stdio.h>
void length(char *);
void reverse(char *);
void display(char *);
int main(){
    char s[10]="Computer";
    display(s);
    length(s);
    reverse(s);
    display(s);
    return 0;
}
void display(char *p){
    int i=0;
    while(*(p+i)!='\0'){
        printf("%c",*(p+i));
        i++;
    }
    printf("\n");
}
void length(char *p){
    int i;
    for(i=0;*(p+i)!='\0';i++);
    printf("Length of String = %d\n",i);
}
void reverse(char *p){
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++){
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
}
