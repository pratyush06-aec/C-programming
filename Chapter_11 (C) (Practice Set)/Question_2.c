#include<stdio.h>
#include<stdlib.h>

int main(){
    int n= 6;
    int* ptr;
    ptr= (int*) malloc(n* sizeof(int));
    for(int i= 0; i< 6; i++){
        printf("Enter the value at index %d: \n" , i);
        scanf("%d" , &ptr[i]);
    }
    for(int i= 0; i< 6; i++){
        printf("The value at index %d is %d\n" , i, ptr[i]);
    }
    free(ptr);
    return 0;
}