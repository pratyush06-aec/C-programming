// #include<stdio.h>
// #include<string.h>

// typedef struct employee{
//     char name[10];
//     int code;
//     float salary;
// }emp;

// int main(){
//     emp e1;
//     strcpy(e1.name , "Pratyush");
//     e1.code= 4;
//     e1.salary= 20000000;

//     printf("%s\n %d\n %.2f\n" , e1.name, e1.code, e1.salary);
//     return 0;
// }



// (typedef) keyword is mostly used in-case of sturctures in C language.




// (typedef) keyword can also be used in this way.

#include<stdio.h>
#include<string.h>

struct employee{
    char name[10];
    int code;
    float salary;
};

int main(){
    struct employee typedef emp;
    emp e1;
    strcpy(e1.name , "Pratyush");
    e1.code= 5;
    e1.salary= 60000000;

    printf("%s\n %d\n %.2f\n" , e1.name, e1.code, e1.salary);
    return 0;
}



// All other operations in stuctures like the pointer concept, arrow concept, etc., work as they as used to, with typedef.