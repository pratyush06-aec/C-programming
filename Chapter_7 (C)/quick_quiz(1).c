// Addition of a pointer and an number.



// #include<stdio.h>

// int main(){
//     int a, b;
//     int* ptr1= &a;
//     int* ptr2= &b;

//     printf("Enter the value of a: \n");
//     scanf("%d" , &a);
//     printf("Enter the value of b: \n");
//     scanf("%d" , &b);

//     printf("The address of a is %u\n" , ptr1);
//     printf("The sum of %d and %d is %d\n" , ptr1, a, (ptr1+a));

//     printf("The address of b is %u\n" , ptr2);
//     printf("The sum of %d and %d is %d\n" , ptr2, b, (ptr2+b));
//     return 0;
// }




// Substraction of a number from a pointer.



// #include<stdio.h>

// int main(){
//     int a, b;
//     int* ptr1= &a;
//     int* ptr2= &b;

//     printf("Enter the value of a: \n");
//     scanf("%d" , &a);
//     printf("Enter the value of b: \n");
//     scanf("%d" , &b);

//     printf("The address of a is %u\n" , ptr1);
//     printf("The difference between %d and %d is %d\n" , ptr1, a, (ptr1-a));

//     printf("The address of b is %u\n" , ptr2);
//     printf("The difference between %d and %d is %d\n" , ptr2, b, (ptr2-b));
//     return 0;
// }




// Substraction of one pointer from another pointer.



// #include<stdio.h>

// int main(){
//     int a, b;
//     int* ptr1= &a;
//     int* ptr2= &b;

//     printf("Enter the value of a: \n");
//     scanf("%d" , &a);
//     printf("Enter the value of b: \n");
//     scanf("%d" , &b);

//     printf("The address of a is %u\n" , ptr1);
//     printf("The difference between %d and %d is %d\n" , ptr1, ptr2, (ptr1-ptr2));

//     printf("The address of b is %u\n" , ptr2);
//     printf("The difference between %d and %d is %d\n" , ptr2, ptr1, (ptr2-ptr1));
//     return 0;
// }




// Comparision of two pointer variables.


#include<stdio.h>

int main(){
    int a, b;
    int* ptr1= &a;
    int* ptr2= &b;

    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    printf("Enter the value of b: \n");
    scanf("%d" , &b);

    printf("The address of %d is %u\n" , a, ptr1);

    printf("The address of %d is %u\n" , b, ptr2);

    if(ptr1== ptr2){
        printf("The addresses are same!!!!\n");
    }

    else if(ptr1>ptr2){
        printf("The address of variable a is greater than variable b!!!!\n");
    }

    else{
        printf("The address of variable b is greater than variable a!!!!\n");
    }

    return 0;
}