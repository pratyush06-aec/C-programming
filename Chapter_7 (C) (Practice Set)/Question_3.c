#include<stdio.h>

int main(){
    int n= 5;
    int arr[10];
    for(int i= 1; i<= 10; i++){
        // printf("%d X %d = %d\n" , n, i, (n*i));
        printf("{%d}\n" , (n*i));
    }
    return 0;
}