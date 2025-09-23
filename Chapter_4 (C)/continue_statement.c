#include<stdio.h>

int main(){
    for(int i= 1; i<5; i++){
        if(i== 3){
            continue;
        }
        printf("The value of i is: %d\n" , i);
    }
    return 0;
}




// (continue) statement is used to skip the mentioned iteration, and then continue the loop as it was.