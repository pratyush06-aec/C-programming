#include<stdio.h>
int num(char*);
int num(char st[]){
    int i= 0, count;
    char c= st[i];
    while(c!= '\0'){
        c= st[i];
        i++;
    }
    count= i-1;
    return count;
}
int main(){
    char arr[]= "Ha";
    printf("%d\n" , num(arr));
    return 0;
}