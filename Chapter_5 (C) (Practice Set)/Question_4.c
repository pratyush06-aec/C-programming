#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n== 0 || n== 1){
        return (n-1);
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    printf("%d is %d\n" , n, fibonacci(n));
    return 0;
}