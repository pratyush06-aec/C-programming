#include<stdio.h>

int main(){
    int i= 7;
    int* j= &i;
    int**k= &j;                // This acts same as value_at_address.

    printf("%d\n" , i);
    printf("%d\n" , *j);
    printf("%d\n" , **k);
    return 0;
}