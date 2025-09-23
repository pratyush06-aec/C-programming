#include<stdio.h>
void swap(int*, int*);
void swap(int*a, int*b){
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}
int main(){
    int x= 7, y= 8;
    swap(&x, &y);
    printf("The valeu of x is %d and the value of y is %d\n" , x, y);
    return 0;
}