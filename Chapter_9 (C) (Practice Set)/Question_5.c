#include<stdio.h>
#include<string.h>

struct emp{
    int real;
    int imaginary;
};

int main(){
    struct emp e1;
    e1.real= 2;
    e1.imaginary= 4;
    
    printf("%d + %di\n" , e1.real, e1.imaginary);
    return 0;
}