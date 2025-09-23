#include<stdio.h>
int average(int, int, int);
int average(int x, int y, int z){
    printf("The average of the numbers %d, %d, %d is %d\n" , x, y, z, ((x+y+z)/3));
    return ((x+y+z)/3);
}
int main(){
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    printf("Enter the value of b: \n");
    scanf("%d" , &b);
    printf("Enter the value of c: \n");
    scanf("%d" , &c);

    average(a, b, c);
    return 0;
}