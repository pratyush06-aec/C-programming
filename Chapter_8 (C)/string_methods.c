// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st[30]= "Harry";

//     printf("%d" , strlen(st));
//     return 0;
// }



// (strlen) function calculates the length of the string.
// The output is returned in integer, so (%d) is used, for obtaining the length.




// #include<stdio.h>

// int main(){
//     char st[]= "Harryyyy";
//     char target[30]= "Rohan";
    
//     printf("%s %s" , st, target);
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st[]= "Harryyyy";
//     char target[30];
//     strcpy(target, st);
//     printf("%s %s" , st, target);
//     return 0;
// }



// (strcpy) function is used to copy the string in the target.




// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[10]= "Harry";
//     char s2[10]= " Bhai";
//     strcat(s1, s2);
//     printf("%s\n" , s1);
//     return 0;
// }



// (strcat) function is used for string concatenation.
// Here, s2 is concatenated in s1, (strcat) function.




#include<stdio.h>
#include<string.h>

int main(){
    int a= strcmp("feep" , "aoke");      // Positive, as (a) comes first in ascii table and is in the second position.
    int b= strcmp("Deep" , "Joke");      // Negative, as (D) comes first in ascii tabler and is in the first position.
    printf("%d %d\n" , a, b);
    return 0;
}



// (strcmp) function is used to obtain the sentiment of the content of a variable.
// It is calculated based on the ascii values.
// The alphabet(in this case) which come first in ascii table, if that word in the second one, then the value would be positive. If, it's the first one then it's negative.