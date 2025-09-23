// #include<stdio.h>

// int main(){
//     int n, prime= 0, i= 2;
//     printf("Enter the value of n: \n");
//     scanf("%d" , &n);
//     if(n== 0 || n== 1){
//         prime= 1;
//     }
//     else{
//         while(i< n){
//             if(n%i== 0 && n!= 2){
//                 prime= 1;
//                 break;
//             }
//             i++;
//         }
//         if(prime){
//             printf("%d is not prime\n");
//         }
//         else{
//             printf("%d is not prime\n");
//         }
//     }
//     return 0;
// }




#include<stdio.h>

int main(){
    int n= 6, i= 2;
    int prime= 0;
        do{
            if(n%i== 0 && n!= 2 && n== 0 || n== 1){
                prime= 1;
                break;
            }
            i++;
        }while(i< n);
        if(prime){
            printf("%d is not prime\n");
        }
        else{
            printf("%d is prime\n");
        }
    return 0;
}