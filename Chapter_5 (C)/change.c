#include<stdio.h>
int change(int);
int change(int x){
    x= 66;
    return x;
}
int main(){
    int b= 55;
    change(b);
    printf("%d\n" , b);
    return 0;
}



// (change) doesn't changes the value of b.