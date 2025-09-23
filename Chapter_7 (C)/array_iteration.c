#include<stdio.h>

int main(){
    int marks[5]= {1, 2, 3, 4, 5};
    int* ptr= marks;

    for(int i= 0; i< 5; i++){
        // printf("The marks of student %d is %d\n" , i, marks[i]);
        printf("The marks of student %d is %d\n" , i, *ptr);
        ptr++;
    }
    return 0;
}