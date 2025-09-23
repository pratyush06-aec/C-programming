#include<stdio.h>

int main(){
    int fact= 1, n, i= 1;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    while(i<= n){
        fact*= i;
        i++;
    }
    printf("The factorial of the number is: %d\n" , fact);
    return 0;
}