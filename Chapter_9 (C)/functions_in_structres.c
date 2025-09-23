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



// Need to define the struct part in a similar manner before the function prototype and function defination.
// And in the main function below, every other thing would be same like other structures programs, only the printf part is ommited here by the function call. 