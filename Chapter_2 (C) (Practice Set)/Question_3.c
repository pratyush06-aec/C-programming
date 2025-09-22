#include<stdio.h>

int main(){
    int a, b= 97;
    printf("Emter the value of a: " , a);
    scanf("%d" , &a);

    if(a%b== 0){
        printf("The number is divisible by 97");
    }
    else{
        printf("The number is not divisible by 97");
    }
    return 0;
}