#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};

int main(){
    struct emp e1;
    struct emp *ptr= &e1;
    strcpy(e1.name , "Pratyush");
    // e1.code= 3;
    // e1.salary= 20000000;

    ptr->salary= 20000;
    ptr->code= 3;                          // This can also be written in the above manner.
    
    printf("%s\n %d\n %.2f\n" , ptr->name, ptr->code, ptr->salary);
    return 0;
}