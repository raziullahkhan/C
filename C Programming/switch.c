#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch,a,b;
    while(1){
        printf("\n1. Addition");
        printf("\n2. Check Odd/Even");
        printf("\n3. Print n Natural Number");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d",&a,&b);
                printf("%d + %d = %d",a,b,a+b);
                break;
            case 2:
                printf("Enter any number: ");
                scanf("%d",&a);
                a%2==0?printf("%d is Even!",a):printf("%d is odd!",a);
                break;
            case 3:
                printf("Enter any number: ");
                scanf("%d",&a);
                b=1;
                while(b<=a){
                    printf("%d ",b);
                    b++;
                }
                break;
                case 4:
                   exit;
                default:
                    printf("Invalid Choice!");
        }
    }
    return 0;
}