#include<stdio.h>
#include<stdlib.h>

int main(){
    float n= 5;
    float* ptr;
    ptr= (float*) malloc(n* sizeof (float));
    for(int i= 0; i< 5; i++){
        printf("Enter the value at index %d: \n" , i);
        scanf("%f" , &ptr[i]);
    }
    for(int i= 0; i< 5; i++){
        printf("The value at index %d is %.2f\n" , i, ptr[i]);
    }
    return 0;
}