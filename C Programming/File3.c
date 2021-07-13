#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[10];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("File cannot open!");
        exit(1);
    }
    while(fgets(str,9,fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}