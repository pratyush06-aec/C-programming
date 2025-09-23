#include<stdio.h>
int factorial(int);
int factorial(int n){
    if(n== 0 || n== 1){
        return 1;
    }
    else{
        return factorial(n- 1)*n;
    }
}
int main(){
    int a;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    printf("The factorial of %d is %d\n" , a, factorial(a));
    return 0;
}