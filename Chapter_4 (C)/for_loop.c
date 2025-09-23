#include<stdio.h>

int main(){
    int n= 6;
    for(int i= 0; i<= 6; i++){
        printf("The value of i is: %d\n" , i);
    }
    return 0;
}


// Here, inside the (for) loop the (i= 0) part is called the initialization part.
// The (i<= 6) inside the loop is called the test/check section. 
// And the, (i++/i+=1) is called the increamenting block/part.

// The rule in case of (for) loop is that the initialization is matched with the check part and then the code is executed and then it's increamented.