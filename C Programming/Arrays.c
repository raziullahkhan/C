#include<stdio.h>
void main(){
    int arr[5],i,sum=0;
    printf("Enter 5 number: ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
     for(i=0;i<5;i++){
         printf("%d ",arr[i]);
         sum+=arr[i];
     }
     printf("\nSum = %d",sum);
     printf("\nAverage = %f",(sum/5.0));
}