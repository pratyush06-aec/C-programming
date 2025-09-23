#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};

int main(){
    struct emp e1, e2, e3;
    printf("Enter the data of first employee: \n");
    scanf("%s %d %f" , e1.name, &e1.code, &e1.salary);  
    printf("%s %d %.2f\n" , e1.name, e1.code, e1.salary);

    printf("Enter the data of second employee: \n");
    scanf("%s %d %f" , e2.name, &e2.code, &e2.salary);  
    printf("%s %d %.2f\n" , e2.name, e2.code, e2.salary);  
    
    printf("Enter the data of first employee: \n");
    scanf("%s %d %f" , e3.name, &e3.code, &e3.salary);  
    printf("%s %d %.2f\n" , e3.name, e3.code, e3.salary);  
    
    return 0;
}