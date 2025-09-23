#include<stdio.h>
int change(int);
int change(int x){
    return 10*x;
}
int main(){
    int a= 6;
    printf("The current value of a is %d\n" , change(a));
    return 0;
}