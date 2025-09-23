#include<stdio.h>

int main(){
    int fact= 1, n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    for(int i= 1; i<= n; i++){
        fact*= i;
    }
    printf("The factorial is: %d\n" , fact);
    return 0;
}