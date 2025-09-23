#include<stdio.h>

int main(){
    for(int i= 1; i<5; i++){
        if(i== 3){
            break;
        }
        printf("The value of i is: %d\n" , i);
    }
    return 0;
}




// (break) statement is used to break the loop immediately from the mentioned iteration.