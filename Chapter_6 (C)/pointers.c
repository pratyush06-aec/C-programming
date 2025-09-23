// #include<stdio.h>

// int main(){
//     int i= 67;
//     printf("%p" , &i);           // (%p) indicates the hexadecimal address of i(here).
//     printf("%u" , &i);          // (%u) indicates unsigned integer. It gives the adderss of i(here) in integer format.
//     return 0;
// }



#include<stdio.h>

int main(){
    int i= 5;
    int* j= &i;
    printf("%p\n" , &i);
    printf("%p\n" , j);         // (int* j) stores the value of i, which previously was stored with (&i).
    return 0;
}




// (&) stores the address of operator.
// (*) stores the value of operator.