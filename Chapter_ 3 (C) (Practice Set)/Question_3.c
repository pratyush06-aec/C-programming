#include<stdio.h>

int main(){
    float income;
    printf("Enter the income: \n");
    scanf("%f" , &income);

    if(income<= 500000 && income>= 250000){
        printf("The income tax to be paid is: %f\n" , (0.05*(income-250000)));
    }
    else if(income<= 1000000 && income>= 500001){
        printf("The income tax to be paid is: %f\n" , (0.2*(income-500000))+ (0.05*(500000-250000)));
    }
    else if(income>= 1000001){
        printf("The income tax to be paid is: %f\n" , (0.3*(income-1000000))+ (0.05*(500000-250000))+ 0.2*(1000000-500000));
    }
    else{
        printf("You are not our citizen!!!!\n");
    }
    return 0;
}