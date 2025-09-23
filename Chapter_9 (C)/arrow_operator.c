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
    e1.salary= 300000;
    
    printf("%.2f\n" , ptr->salary);
    return 0;
}