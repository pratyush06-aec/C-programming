#include<stdio.h>

int main(){
    int arr[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr= arr;

    printf("%d\n" , *ptr+= 2);
    
    return 0;
}