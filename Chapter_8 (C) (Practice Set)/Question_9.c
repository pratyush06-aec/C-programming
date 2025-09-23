#include<stdio.h>
#include<string.h>

int main(){
    char st[]= "Harry";
    char c= 'r';
    int count= 0;

    for(int i= 0; i< strlen(st); i++){
        if(st[i]== c){
            count= 1;
            break;
        }
    }

    if(count){
        printf("Yesss!!!!\n");
    }
    else{
        printf("No!!!!\n");
    }
    // printf("%d" , count);
    return 0;
}