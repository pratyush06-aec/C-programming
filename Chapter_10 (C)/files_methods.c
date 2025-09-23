// (r) refers to the read mode.


// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("pratyush.txt" , "r");
//     fscanf(ptr , "%d" , &ptr);
//     printf("%d\n" , ptr);
//     return 0;
// }




// (w) refers to the write mode.


// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("pratyush.txt" , "w");
//     int num= 43;
//     fprintf(ptr, "%d" , num);
//     fclose(ptr);                            // Used to close the file after use.
//     return 0;
// }



// (w) write, deletes the previous data of the mentioned file and then writes the mentioned input in the current progarm.


// (a) append, mode helps to write the input of the current program at the end of the previously stored data of the mentioned file, without deleting them like the write(w) mode.


#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "a");
    int num= 67;
    fprintf(ptr , "%d" , num);
    fclose(ptr);
    return 0;
}