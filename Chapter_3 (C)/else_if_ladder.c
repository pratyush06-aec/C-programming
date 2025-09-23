#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: " , a);
    scanf("%d" , &a);
    if(a>60){
        printf("You are a senior citizen!!!");
    }
    else if(a>18){
        printf("You are an adult!!!!");
    }
    else{
        printf("You don't exist!!");
    }
    return 0;
}



// It can also be written without the (else) statement, i.e., independent (if-(else-if)).