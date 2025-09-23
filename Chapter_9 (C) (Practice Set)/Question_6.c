#include<stdio.h>
#include<string.h>

typedef struct employee{
    int real;
    int imaginary;
}emp;

void display(emp ptr){
    printf("%d + %di\n" , ptr.real , ptr.imaginary);
};

int main(){
    emp ptr1[5];
    for(int i= 0; i< 5; i++){
        printf("Enter the real part: \n");
        scanf("%d" , &ptr1[i].real);

        printf("Enter the imaginary part: \n");
        scanf("%d" , &ptr1[i].imaginary);

        display(ptr1[i]);
    }      
    return 0;
}