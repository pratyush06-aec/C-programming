#include<stdio.h>
#include<string.h>

struct employee{
    int real;
    int imaginary;
};

int main(){
    struct employee typedef emp;
    emp e1;
    e1.real= 3;
    e1.imaginary= 5;

    printf("%d + %di\n" , e1.real, e1.imaginary);
    return 0;
}