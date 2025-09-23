#include<stdio.h>

int main(){
    int n, prime= 0;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);
    if(n== 0 || n== 1){
        prime= 1;
    }
    else{
        for(int i= 2; i< n; i++){
        if(n%i== 0 && n!= 2){
            prime= 1;
            break;
        }      
    }
    if(prime){
        printf("%d is not prime\n" , n);
    }
    else{
        printf("%d is prime\n" , n);
    }
    }  
    return 0;
}