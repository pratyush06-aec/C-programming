#include<stdio.h>
char* slice(char, int, int);
char* slice(char st[], int m, int n){
    char *ptr1= &st[m];
    char *ptr2= &st[n];
    st= ptr1;
    st[n]= '\0';
    return st;
}
int main(){
    char arr[]= "Harry Bhai";
    printf("%s" , slice(arr, 1, 5));
    return 0;
}