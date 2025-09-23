#include<stdio.h>
#include<string.h>

typedef struct employee{
    int dd;
    char mm;
    int yyyy;
}emp;

int compare(emp d1 , emp d2);
int compare(emp d1 , emp d2){
    if(d1.dd== d2.dd && d1.mm== d2.mm && d1.yyyy== d2.yyyy){
        return 0;
    }
    else if(d1.dd>d2.dd){
        return 1;
    }
    else if(d1.dd<d2.dd){
        return -1;
    }
    else if(d1.mm>d2.mm){
        return 1;
    }
    else if(d1.mm<d2.mm){
        return -1;
    }
    else if(d1.yyyy>d2.yyyy){
        return 1;
    }
    else if(d1.yyyy<d2.yyyy){
        return -1;
    }
}
int main(){
    emp d1= {24, 03, 2020};
    emp d2= {23, 12, 2020};

    printf("The comparison output is %d\n" , compare(d1, d2));
    return 0;
}