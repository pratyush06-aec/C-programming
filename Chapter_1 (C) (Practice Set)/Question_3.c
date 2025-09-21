#include<stdio.h>
int main(){
    float c;
    printf("Enter the temperature in celsius: " , c);
    scanf("%f" , &c);

    printf("The temperature in fahrenheit is: %f\n" , (((c*9)/5)+32));
    return 0;
}