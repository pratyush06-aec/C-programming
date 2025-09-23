#include<stdio.h>

int main(){
    int m;
    printf("Enter the marks: \n");
    scanf("%d" , &m);

    if(m<=100 && m>=90){
        printf("You acquired grade A!!!");
    }
    else if(m<=89 && m>=80){
        printf("You acquired grade B!!!");
    }
    else if(m<=79 && m>=70){
        printf("You acquired grade C!!!");
    }
    else if(m<=69 && m>=60){
        printf("You acquired grade D!!!");
    }
    else if(m<=59 && m>=50){
        printf("You acquired grade E!!!");
    }
    else{
        printf("You acquired grade F!!!");
    }
    return 0;
}