#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
            
        case 2:
            printf("You entered 2\n");
            break;

        default:
            printf("Nothing matched\n");
            break;
    }
    return 0;
}