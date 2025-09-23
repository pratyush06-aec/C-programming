#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};
int main(){
    struct emp e1;
    strcpy(e1.name , "Harry");
    e1.code= 3;
    e1.salary= 30000000;
    
    printf("%s\n %d\n %.2f\n" , e1.name, e1.code, e1.salary);
    printf("%u\n %u\n %u\n" , &e1.name, &e1.code, &e1.salary);
    return 0;
}



// Here, padding is taking place.
// Padding in this context refers to extra bytes that the compiler automatically adds between structure members to ensure that each member is stored at a memory address aligned to its type’s requirements.