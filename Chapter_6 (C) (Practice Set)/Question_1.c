#include<stdio.h>

int main(){
    int a= 6;
    int* b= &a;
    printf("%p\n" , b);
    printf("%d\n" , *b);
    return 0;
}