#include<stdio.h>
int num(char*);
int num(char st[]){
    int count, i= 0;
    char c= st[i];
    while(c!= '\0'){
        c= st[i];
        i++;
    }
    count= i-1;
    return count;
}

void copy(char*, char*);
void copy(char source[], char target[]){
    for(int i= 0; i< num(source); i++){
        target[i]= source[i];
    }
    target[num(source)]= '\0';
}
int main(){
    char arr[]= "Harry";
    char tar[20];
    copy(tar, arr);
    printf("%s %s" , arr, tar);
    return 0;
}