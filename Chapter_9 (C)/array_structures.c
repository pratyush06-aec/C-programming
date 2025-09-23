#include<stdio.h>
#include<string.h>

struct emp{
    char name[10];
    int code;
    float salary;
};

int main(){
    struct emp fb[100];
    fb[0].code= 100;    
    fb[1].code= 200;    
    fb[2].code= 300;    
    fb[3].code= 400;    
    fb[4].code= 500;
    
    printf("%d %d %d %d %d\n" , fb[0].code, fb[1].code,fb[2].code, fb[3].code, fb[4].code, fb[5].code);
    return 0;
}



//Here, the codes are assigned in an array. 