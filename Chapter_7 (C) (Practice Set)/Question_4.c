#include<stdio.h>

int main(){
    int n, arr[10];
    printf("Enter the valeu of n: \n");
    scanf("%d" , &n);

    for(int i= 1; i<= 10; i++){
        printf("{%d}\n" , (n*i));
    }
    return 0;
}