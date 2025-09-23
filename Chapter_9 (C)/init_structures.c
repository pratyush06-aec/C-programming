#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};

int main(){
    struct emp e1= {"Harry" , 2, 10000};
    printf("%s\n %d\n %.2f\n" , e1.name, e1.code, e1.salary);    
    return 0;
}