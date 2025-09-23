// #include<stdio.h>

// int sum(int, int);
// int sum(int x, int y){
//     printf("%d\n" , x+y);
//     return x+y;
// }
// int main(){
//     sum(2,3);
//     return 0;
// }




#include<stdio.h>
int sum(int, int);
int sum(int x, int y){
    return x+y;
}
int main(){
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    printf("Enter the value of b: \n");
    scanf("%d" , &b);
    c= (a+b);
    printf("The value of c is: %d\n" , c);
    return 0;
}