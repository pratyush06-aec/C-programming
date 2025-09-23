#include<stdio.h>

int main(){
    int a;
    if('a'){
        printf("This is also executed!!!\n");
    }
    if(0){
        printf("This is NOT executed!!!\n");
    }
    if(234){
        printf("This is executed!!!!\n");
    }
    return 0;
}


// Any non_zero value would be returned.