#include<stdio.h>
#include<string.h>

struct employee{
    char name[10];
    int code;
    float salary;

};

int main(){
    struct employee e1;
    strcpy(e1.name, "Harry");
    e1.code= 44;
    e1.salary= 4445.6;
    
    printf("%s\n %d\n %f\n" , e1.name, e1.code, e1.salary);
    return 0;
}