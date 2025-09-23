#include<stdio.h>
#include<string.h>

struct emp{
    int i;
    int j;
};

int main(){
    struct emp e1;
    e1.i= 2;
    e1.j= 4;

    printf("%di + %dj\n" , e1.i, e1.j);
    return 0;
}