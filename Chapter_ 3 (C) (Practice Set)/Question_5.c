#include<stdio.h>

int main(){
    int ch= 'A';
    printf("The value of the character is: %d\n" , ch);
    printf("The character is: %c\n" , ch);

    if(ch>= 97 && ch<= 122){
        printf("The charater is a lowercase\n");
    }
    else{
        printf("The character is not a lowecase\n");
    }
    return 0;
}



// This problem is solved in accordance to ASCII values. 
// (97) & (122) are the ASCII values.