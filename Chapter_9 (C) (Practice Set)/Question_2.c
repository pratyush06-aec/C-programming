#include<stdio.h>
#include<string.h>

struct emp{
    int i;
    int j;
};

struct emp sumvector(struct emp v1, struct emp v2);
struct emp sumvector(struct emp v1, struct emp v2){
    struct emp v3= {(v1.i+v2.i) , (v1.j+v2.j)};
    return v3;
};

int main(){
    struct emp e1= {1, 2};
    struct emp e2= {3, 4};
    struct emp e3= sumvector(e1, e2);

    printf("%di + %dj\n" , e3.i, e3.j);
    return 0;
}