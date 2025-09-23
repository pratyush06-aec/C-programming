// #include<stdio.h>

// int main(){
//     char st[]= {'a' , 'b' , 'c' , '\0'};

//     for(int i= 0; i< 3; i++){
//         printf("%c\n" , st[i]);
//     }
//     return 0;
// }


// When, we are writing any string in {} brackets, then we have to enter the null character(\0).
// But, when we are writing any string inside double quotes then, the null character is inserted automatically and we dont't need to manually enter it.



// #include<stdio.h>

// int main(){
//     char st[]= "abc";
    
//     for(int i= 0; i< 3; i++){
//         printf("%c\n" , st[i]);
//     }
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     char st[]= "abc";
    
//     for(int i= 0; i<= 3; i++){       // As, we are giving the checking condition as (less-than-equals) so it prints the null characater also.
//         printf("%c\n" , st[i]);
//     }
//     return 0;
// }




#include<stdio.h>

int main(){
    char st[]= {'a' , 'b' , 'c' , '\0'};

    for(int i= 0; i<= 3; i++){               // Here, also the same thing happens, just like the above.
        printf("%c\n" , st[i]);
    }
    return 0;
}