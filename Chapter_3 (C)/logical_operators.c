#include<stdio.h>

int main(){
    int a= 0, b= 0;
    printf("The value of a and b is: %d\n" , (a&&b));
    printf("The value of a or b is: %d\n" , (a||b));
    printf("The value of a not b is: %d\n" , !a);
    return 0;
}



// for NOT operator:
// 0 -> 1
// 1-> 0

// for AND operator:
// 0 and 1-> 0
// 0 and 0-> 0
// 1 and 1-> 1

// for OR operator:
// 0 or 1-> 1
