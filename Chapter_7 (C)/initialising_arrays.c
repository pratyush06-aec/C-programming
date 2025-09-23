// #include<stdio.h>

// int main(){
//     int arr[3]= {0, 1, 2};
//     for(int i= 0; i< 3; i++){
//         printf("The value at index %d is %d\n" , i, arr[i]);
//     }
//     return 0;
// }




// It could also have been done, by not exactly mentioning the size of the array. Just as below.......



#include<stdio.h>

int main(){
    int arr[]= {0, 1, 2};
    for(int i= 0; i< 3; i++){
        printf("The value at index %d is %d\n" , i, arr[i]);
    }
    return 0;
}