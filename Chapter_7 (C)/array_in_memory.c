// #include<stdio.h>

// int main(){
//     int marks[5];
//     int* ptr= marks;
//     for(int i= 0; i< 5; i++){
//         printf("Enter the marks of student %d\n" , i);
//         scanf("%d" , &marks[i]);
//     }

//     for(int i= 0; i< 5; i++){
//         printf("The marks of student %d is %d\n" , i, marks[i]);
//         printf("The address of the marks of student %d is %u\n" , i, ptr);
//         ptr++;
//     }
//     return 0;
// }




// It, can also be done in the following way.

// And, int* ptr= &marks[0] is same as int* ptr= marks;



#include<stdio.h>

int main(){
    int marks[5]= {1, 2 ,3, 4};

    for(int i= 0; i< 4; i++){
        printf("The marks of student %d is %d\n" , i, marks[i]);
        printf("The address of the marks of student %d is %u\n" , i, &marks[i]);
    }
    return 0;
}