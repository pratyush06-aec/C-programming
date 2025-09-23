#include<stdio.h>
#include<stdlib.h>

int main(){
    int n= 10;
    int a= 7;
    int* ptr;
    ptr= (int*) malloc(n* sizeof(int));
    for(int i= 1; i<= 10; i++){
        printf("%d X %d = %d\n" , a, i, (a*i));
    }
    printf("\n");
    ptr= (int*) realloc(ptr, 15* sizeof(int));
    for(int i= 1; i<= 15; i++){
        printf("%d X %d = %d\n" , a, i, (a*i));
    }
    free(ptr);
    return 0;
}