#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "r");
    while(1){
        char a= fgetc(ptr);
        printf("%c" , a);
        if(a== EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}