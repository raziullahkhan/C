#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int i;
    int j;
    int temp=-234;
    printf("How many no. you want to enter: ");
    scanf("%d",&i);
    p=(int*)calloc(i,4);
    printf("Enter %d no.: ",i);
    for(j=0;j<i;j++){
        scanf("%d",&*(p+i));
        if(*(p+i)>temp){
            temp=*(p+i);
        }
    }
    printf("The maximum is %d!",temp);
    free(p);
    return 0;
}