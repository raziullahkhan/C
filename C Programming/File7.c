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
    fp=fopen("f2.dat","rb");
    if(fp==NULL){
        printf("File not found!");
        exit(1);
    }
    //fread(&b,sizeof(b),1,fp);
    //printf("%d %s %f\n",b.bookid,b.title,b.price);
    while(fread(&b,sizeof(b),1,fp)>0){
         printf("%d %s %f\n",b.bookid,b.title,b.price);      
    }
    fclose(fp);
    return 0;
}