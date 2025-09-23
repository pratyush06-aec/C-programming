#include<stdio.h>

int address(int*);
int address(int* j){
    printf("%p\n" , j);
}

int main(){
    int i= 7;
    int* j= &i;
    printf("%p\n" , j);
    address(j);
    return 0;
}




