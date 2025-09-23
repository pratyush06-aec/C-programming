#include<stdio.h>

int main(){
    FILE *ptr, *ptr1;
    ptr= fopen("pratyush.txt" , "r");
    ptr1= fopen("pratyush1.txt" , "a");
    while(1){
        char ch= fgetc(ptr);
        if(ch== EOF){
            break;
        }
        else{
            fprintf(ptr1 , "%c" , ch);
            fprintf(ptr1 , "%c" , ch);
            printf("%c" , ch);
        }
    }
    fclose(ptr); 
    return 0;
}