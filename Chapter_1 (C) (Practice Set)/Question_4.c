#include<stdio.h>
int main(){
    int t;
    float p, r;
    printf("Enter the principle amount: " , p);
    scanf("%f" , &p);
    printf("Enter the rate of interest amount: " , r);
    scanf("%f" , &r);
    printf("Enter the time: " , t);
    scanf("%d" , &t);

    printf("The simple interest is: %.2f\n" , ((p*r*t)/100));
    return 0;
}

