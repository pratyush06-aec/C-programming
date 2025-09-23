#include<stdio.h>

int main(){
    int n, i= 1;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    int sum= 0;
    while(i<= n){
        sum+= i;
        i++;
    }
    printf("The sum of first n natural numbers is: %d\n" , sum);
    return 0;
}