#include<stdio.h>

int main(){
    char st[30];
    printf("Enter the string: \n");
    gets(st);
    printf("%s" , st);
    return 0;
}


// (gets) is used for entering multi-word string, with spaces.