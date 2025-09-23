#include<stdio.h>

int sum(int, int);
int sum(int x, int y){
    return (x+y);
}

int avg(int , int);
int avg(int x, int y){
    return ((x+y)/2);
}

int main(){
    int a, b;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);    
    printf("Enter the value of b: \n");
    scanf("%d" , &b);    

    printf("The sum of %d and %d is %d\n" , a, b, sum(a, b));
    printf("The average of %d and %d is %d\n" , a, b, avg(a, b));


    printf("The address of sum is %p\n" , sum);
    printf("The address of average is %p\n" , avg);
    printf("The address of sum is %u\n" , sum);
    printf("The address of average is %u\n" , avg);
    return 0;
}