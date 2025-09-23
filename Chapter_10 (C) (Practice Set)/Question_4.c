// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("pratyush.txt" , "w");
//     char name1[10], name2[10];
//     printf("Enter the name of the first employee: \n");
//     scanf("%s" , name1);
//     printf("The name of the first employee is %s\n" , name1);
//     printf("Enter the name of the second employee: \n");
//     scanf("%s" , name2);
//     printf("The name of the second employee is %s\n" , name2);
//     fprintf(ptr , "%s, 3300\n" , name1);
//     fprintf(ptr , "%s, 7700\n" , name2);
//     fclose(ptr);
//     return 0;
// }




// Can also be done by taking the salary as an input from the user.



#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("pratyush.txt" , "w");
    char name1[10], name2[10];
    int salary1, salary2;
    printf("Enter the name of the first employee: \n");
    scanf("%s" , name1);
    printf("The name of the first employee is %s\n" , name1);
    printf("The salary of first employee is: \n");
    scanf("%d" , &salary1);
    printf("The salary of the first employee is: %d\n" , salary1);
    printf("Enter the name of the second employee: \n");
    scanf("%s" , name2);
    printf("The name of the second employee is %s\n" , name2);
    printf("The salary of seocnd employee is: \n");
    scanf("%d" , &salary2);
    printf("The salary of the second employee is: %d\n" , salary2);
    fprintf(ptr , "%s, %d\n" , name1, salary1);
    fprintf(ptr , "%s, %d\n" , name2, salary2);
    fclose(ptr);
    return 0;
}