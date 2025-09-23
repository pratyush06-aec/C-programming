#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "r");
    if(ptr== NULL){
        printf("The file doesn't exist!!!!\n");
    }
    else{
        
        fscanf(ptr , "%d" , &ptr);
        printf("%d\n" , ptr);
    }
  
    return 0;
}