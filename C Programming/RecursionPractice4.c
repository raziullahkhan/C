//Print Array By Recursion
#include<stdio.h>
void main(){
    int arr[]={2,3,4,5,6,2,45,6,78,7};
    int size=10;
    printf("The array is ");
    printArray(arr,0,size);
}
void printArray(int arr[],int in,int size){
    if(in>=size){
        return;
    }
    printf("%d ",arr[in]);
    in++;
    printArray(arr,in,size);
}