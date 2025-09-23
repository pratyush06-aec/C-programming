// #include<stdio.h>

// int main(){
//     char st[30];
//     printf("Enter the string: \n");
//     gets(st);
//     printf("%s" , st);
//     printf("Harry");
//     return 0;
// }




#include<stdio.h>

int main(){
    char st[30];
    printf("Enter the string: \n");
    gets(st);
    printf("%s" , st);
    puts(st);
    printf("Harry");
    return 0;
}



// (puts) is used for automatically providing a new line.
// The difference is, if we only use (gets), then the new thing in printf later, is printed beside the enter thing through (gets).
// But, with (puts), the new string in printf later, is printed in the next line of the entered string through (gets).