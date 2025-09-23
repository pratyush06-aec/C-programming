#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    int* ptr;
    ptr= (int*) malloc(n* sizeof (int));          // Here, malloc returns a null pointer, thus (int) is taken to return an integer value.
    ptr[0]= 3;     
    ptr[1]= 4;
    for(int i= 0; i< 2; i++){
        printf("%d\n" , ptr[i]);
    }     
    return 0;
}




// malloc allocates the size of an array.
// i.e., you can customize the memory.
// In case of malloc, the default values are garbage values.