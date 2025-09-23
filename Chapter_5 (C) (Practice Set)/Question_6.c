#include<stdio.h>
int sum(int);
int sum(int n){
    if(n== 1){
        return 1;
    }
    return sum(n-1)+ n;
}
int main(){
    int a;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);

    printf("The sum of %d natural numbers is %d\n" , a, sum(a));
    return 0;
}