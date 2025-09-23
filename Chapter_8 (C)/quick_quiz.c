#include<stdio.h>

int main(){
    char st[]= "abc";
    
    for(int i= 0; i< 3; i++){
        printf("%c\n" , st[i]);
    }
    return 0;
}




#include<stdio.h>

int main(){
    char st[]= "abc";
    
    for(int i= 0; i<= 3; i++){       // As, we are giving the checking condition as (less-than-equals) so it prints the null characater also.
        printf("%c\n" , st[i]);
    }
    return 0;
}




