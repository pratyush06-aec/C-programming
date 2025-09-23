#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};

void show(struct emp e1);
void show(struct emp e1){
    printf("%s\n %d\n %.2f\n" , e1.name, e1.code, e1.salary);
};

int main(){
    struct emp e1;
    strcpy(e1.name , "Harry");
    e1.code= 3;
    e1.salary= 4000000;

    show(e1);
    return 0;
}