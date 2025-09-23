#include<stdio.h>

int main(){
    int arr[3][10];
    int mul[3]= {mul[0], mul[1], mul[2]};

    // printf("Enter the value of mul[0]: \n");
    // scanf("%d" , &mul[0]);

    // printf("Enter the value of mul[1]: \n");
    // scanf("%d" , &mul[1]);

    // printf("Enter the value of mul[2]: \n");
    // scanf("%d" , &mul[2]);

    for(int i= 0; i< 3; i++){
        for(int j= 0; j< 10; j++){
            arr[i][j]= mul[i]* (j+1);
        }
    }

    for(int i= 0; i< 3; i++){
        for(int j= 0; j< 10; j++){
            printf("%d\n" , arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}