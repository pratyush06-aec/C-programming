#include<stdio.h>
float force(float, float);
float force(float g, float m){
    printf("The force of attraction with gravity %f and mass %f is %.2f\n" , m, g, (m*g));
    return (m*g);
}
int main(){
    float m, g= 9.8;
    printf("Enter the mass: \n");
    scanf("%f" , &m);
    force(m, g);
    return 0;
}