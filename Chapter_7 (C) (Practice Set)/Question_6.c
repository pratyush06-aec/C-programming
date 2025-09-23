#include<stdio.h>
int display(int*, int);
int display(int arr[], int size){
    int count= 0;
    for(int i= 0; i< size; i++){
        if(arr[i]> 0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[5]= {1, 2, -6, 7, 8};
    printf("The number of positive numbers in the array are: %d\n" , display(arr, 5));
    return 0;
}