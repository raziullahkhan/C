#include<stdio.h>
#include<string.h>
struct book{
    int id;
    char title[20];
    float price;
};
struct book input(){
    struct book b;
    printf("Enter Book ID, Book Title, Book Price: ");
    scanf("%d",&b.id);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
}
void display(struct book b){
    printf("\nBook Id: %d\nBook Title: %s\nBook Price: %f",b.id,b.title,b.price);
}
int main(){
    struct book b1;
    b1=input();
    display(b1);
}