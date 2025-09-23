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
    e1.code= 67;
    
    printf("%d\n" , (*ptr).code);
    return 0;
}