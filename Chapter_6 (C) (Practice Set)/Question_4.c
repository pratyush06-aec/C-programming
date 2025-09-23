#include<stdio.h>
int sum(int*, int*);
int sum(int* x, int* y){
    *x= 5, *y= 8;
    return (*x+*y); 
}
int main(){
    int a= 3, b= 7;
    printf("The sum of %d and %d is %d\n" , a, b, sum(&a, &b));
    return 0;
}