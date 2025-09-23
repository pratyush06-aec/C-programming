#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "w");
    int n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    for(int i= 1; i<= 10; i++){
        fprintf(ptr , "%d X %d = %d\n" , n , i , (n*i));
    }
    fclose(ptr);
    return 0;
}