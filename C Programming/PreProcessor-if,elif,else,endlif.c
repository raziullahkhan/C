#include<stdio.h>
#define COUNTRY India
int main(){
    #if COUNTRY==Pakistan
        printf("Pakistani Rupees");
    #elif COUNTRY==Bangladesh
        printf("Taka");
    #elif COUNTRY==Nepal
        printf("Nepali Rupees");
    #else
        printf("Indian Rupees");
    #endif
}