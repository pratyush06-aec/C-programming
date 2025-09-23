#include<stdio.h>
#include<string.h>

int main(){
    char st[]= "Harry";
    int count= 0;
    char c= 'r';

    for(int i= 0; i< strlen(st); i++){
        if(st[i]== c){
            count++;
        }
    }

    printf("%d" , count);
    return 0;
}