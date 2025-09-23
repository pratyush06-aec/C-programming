// #include<stdio.h>

// int main(){
//     int n, sum= 0;
//     printf("Enter the value of n: \n");
//     scanf("%d" , &n);
//     for(int i= 1; i<= n; i++){
//         sum+= i;
//     }
//     printf("The value of first n natural numbers is: %d\n" , sum);
//     return 0;
// }




#include<stdio.h>

int main(){
    int n, sum= 0, i= 1;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    do{
        sum+= i;
        i++;
    }while(i<= n);
    printf("The sum of first n natural number is: %d\n" , sum);
    return 0;
}