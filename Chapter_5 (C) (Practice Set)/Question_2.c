#include<stdio.h>
float convert(float);
float convert(float c){
    printf("The temperature %f in fahrenheit, is %f\n" , c, ((c*1.8)+32));
    return (((c*9)/5)+32);
}
int main(){
    float celsius;
    printf("Enter the temperature in celsius: \n");
    scanf("%f" , &celsius);

    convert(celsius);
    return 0;
}



// (%.0f) would give the result like an integer without a decimal representation.