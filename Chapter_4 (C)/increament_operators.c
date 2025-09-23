#include<stdio.h>

int main(){
    int i= 1;
    printf("The value of i is: %d\n" , i++);
    printf("The value of i is: %d\n" , i);
    printf("The value of i is: %d\n" , ++i);
    printf("The value of i is: %d\n" , i);
    return 0;
}



// (i++) is called post increament operator. As, it prints the value of (i) first, then increaments the value of (i).
// (++i) is called pre increament operatro. As, it increaments the value of (i) first, then prints the value of (i). 