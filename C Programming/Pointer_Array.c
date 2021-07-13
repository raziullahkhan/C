#include<stdio.h>
void input(int *);
void display(int *);
void sort(int *);
int main(){
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
    return 0;
}
void input(int *p){
    int i;
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
}
void display(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}
void sort(int *p){
    int round,t,i;
    for(round=1;round<=4;round++){
        for(i=0;i<=4-round;i++){
            if(*(p+i)>*(p+i+1)){
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }    
}
