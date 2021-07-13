#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book{
    int bookid;
    char title[20];
    float price;
};
int main(){
    struct book b;
    FILE *fp;
    fp=fopen("f2.dat","wb");
    printf("Enter bookid, title and price: ");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    fwrite(&b,sizeof(b),1,fp);
    fclose(fp);
    return 0;
}