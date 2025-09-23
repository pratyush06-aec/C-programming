#include<stdio.h>
#include<string.h>

struct employee{
    int acc_no;
    char IFSC_CODE[20];
    char acc_holder_name[20];
    int balance;
};

int main(){
    struct employee typedef emp;
    emp e1;
    strcpy(e1.acc_holder_name , "Pratyush");    
    strcpy(e1.IFSC_CODE , "ABCD2016");
    e1.acc_no= 123456789;
    e1.balance= 2000000;
    
    printf("%s\n %s\n %d\n %d\n" , e1.acc_holder_name, e1.IFSC_CODE, e1.acc_no, e1.balance);
    return 0;
}