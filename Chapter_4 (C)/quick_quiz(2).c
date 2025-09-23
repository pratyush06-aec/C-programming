#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d" , &n);

    for(int i= 1; i<= n; i++){
        printf("The value of i is: %d\n" , i);
    }
    return 0;
}



// A single line of code can be written independently, without the curly brackets of the loop, FOR ALL THE THREE LOOPS.