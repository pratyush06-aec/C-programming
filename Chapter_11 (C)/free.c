#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    int* ptr;
    ptr= (int*) calloc(n, sizeof(int));
    for(int i= 0; i< 2; i++){
        printf("Enter the value at index %d: \n" , i);
        scanf("%d" , &ptr[i]);
    }
    for(int i= 0; i< 2; i++){
        printf("The value at index %d is %d\n" , i, ptr[i]);
    }
    free(ptr);
    return 0;
}