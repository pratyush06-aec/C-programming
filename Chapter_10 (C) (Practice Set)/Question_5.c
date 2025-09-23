#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "w");
    int num= (2*20);
    fprintf(ptr , "%d" , num);
    fclose(ptr);
    return 0;
}