// (fgetc) is used to read character by character from a file through a program.



#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "r");
    char a= fgetc(ptr);
    printf("%c" , a);
    fclose(ptr);
    return 0;
}




// (fputc) is used to write/append a character into a mentioned file in the program.




// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("pratyush.txt" , "w");
//     fputc('x' , ptr);
//     fclose(ptr);
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("pratyush.txt" , "a");
//     fputc('a' , ptr);
//     fclose(ptr);
//     return 0;
// }