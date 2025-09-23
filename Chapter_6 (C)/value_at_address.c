#include<stdio.h>

int main(){
    int i= 7;
    int* j= &i;
    printf("%d\n" , i);
    printf("%d\n" , *j);
    printf("%d\n" , *(&i));           // (*) stores the value at address.
    return 0;
}