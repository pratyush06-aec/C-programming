#include<stdio.h>
void doublearr(int*, int);
void doublearr(int *arr, int size){
    for(int i= 0; i< 5; i++){
        arr[i]= arr[i]*2;
    }
}
int main(){
    int marks[5]= {1, 2, 3, 4, 5};

    for(int i= 0; i< 5; i++){
        printf("The current marks of the students at index %d is %d\n" , i, marks[i]);
    }

    doublearr(marks, 5);

    for(int i= 0; i< 5; i++){
        printf("The updated marks of the student at index %d is %d\n" , i, marks[i]);
    }
    return 0;
}




