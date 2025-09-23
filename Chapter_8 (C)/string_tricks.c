// #include<stdio.h>

// int main(){
//     char st[]= "abc";
//     printf("%s\n" , st);
//     return 0;
// }


// (%s) format-specifier removes the need of loop to print the string.



#include<stdio.h>

int main(){
    char st[4];
    printf("Enter the string: \n");
    scanf("%s" , st);
    printf("%s" , st);
    return 0;
}



// (%s) removes the need of ampercent(&), as it stores the address of operator, but arr/str stores the address of first operator itself.
// (scanf) automatically adds the null character.