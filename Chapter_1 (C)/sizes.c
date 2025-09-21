#include<stdio.h>

int main(){

    int a= 6;
    float b= 8;
    char c= 9;

    printf("The size integer data-type is: %d\n" , sizeof(int));
    printf("The size float data-type is: %zu\n" , sizeof(float));
    printf("The size character data-type is: %zu\n" , sizeof(char));

    return 0;

}


// (%zu) is used with printf for printing values of (sizeof) unsigned integer type.
