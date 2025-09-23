// #include<stdio.h>

// int main(){
//     int i= 1;
//     do{
//         printf("The value of i is: %d\n" , i);
//         i+= 1;
//     }while(i<= 10);
//     return 0;
// }




#include<stdio.h>

int main(){
    int n, i= 1;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    do{
        printf("The valeu fo i is: %d\n" , i);
        i+= 1;
    }while(i<= n);
    return 0;
}