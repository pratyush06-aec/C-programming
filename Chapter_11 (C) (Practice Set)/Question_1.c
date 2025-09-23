#include<stdio.h>
#include<stdlib.h>


int main(){
    int n= 6;
    int* ptr;
    ptr= (int*) malloc(n* sizeof(int));
    ptr[0]= 1;  
    ptr[1]= 2;  
    ptr[2]= 3;    
    ptr[3]= 4;    
    ptr[4]= 5;    
    ptr[5]= 6;
    
    printf("%d\n %d\n %d\n %d\n %d\n %d\n" , ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5]);
    free(ptr);
    return 0;
}