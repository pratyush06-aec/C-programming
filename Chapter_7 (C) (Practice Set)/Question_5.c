#include<stdio.h>
void display(int*, int);
void display(int arr[], int size){
    for(int i= 0; i< size; i++){
        printf(" %d " , arr[i]);
    }
}
int main(){
    int ptr[]= {1, 2, 3, 4, 5, 6};
    display(ptr, 6);

    for(int i= 0; i<(6/2); i++){
        int temp;
        temp= ptr[i];
        ptr[i]= ptr[6-i-1];
        ptr[6-i-1]= temp;
    }
    
    printf("\n");
    
    display(ptr, 6);
    return 0;
}