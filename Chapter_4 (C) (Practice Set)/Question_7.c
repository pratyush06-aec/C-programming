#include<stdio.h>

int main(){
    int sum= 0, n= 8;
    for(int i= 1; i<= 10; i++){
        sum+= (n*i);
    }
    printf("The sum of multiplication table of 8 is: %d\n" , sum);
    return 0;
}