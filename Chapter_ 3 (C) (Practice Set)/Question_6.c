#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);

    printf("Enter the value of b: \n");
    scanf("%d" , &b);

    printf("Enter the value of c: \n");
    scanf("%d" , &c);

    printf("Enter the value of d: \n");
    scanf("%d" , &d);

    if(a>b && a>c && a>d){
        printf("a is greatest!!!!\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is greatest!!!!\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is greatest!!!!\n");
    }
    else{
        printf("d is greatest!!!!\n");
    }
    return 0;
}