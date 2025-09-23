// #include<stdio.h>

// int main(){
//     float s1, s2, s3, t;
//     printf("Enter the marks of subject 1: \n");
//     scanf("%f" , &s1);

//     printf("Enter the marks of subject 2: \n");
//     scanf("%f" , &s1);

//     printf("Enter the marks of subject 3: \n");
//     scanf("%f" , &s1);

//     t= (((s1+ s2+ s3)/300)*100);

//     if(t>= 40){
//         printf("The student has passed the overall exam!!!!\n");
//     }
//     if(s1>= 33 && s2>= 33 && s3>= 33){
//         printf("The student has also passed in all the subjects\n");
//     }
//     else{
//         printf("The student has failed in any subject\n");
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     float s1, s2, s3, t;
//     printf("Enter the marks of subject 1: \n");
//     scanf("%f" , &s1);

//     printf("Enter the marks of subject 2: \n");
//     scanf("%f" , &s2);

//     printf("Enter the marks of subject 3: \n");
//     scanf("%f" , &s3);

//     t= (((s1+ s2+ s3)/300)*100);

//     if(t>= 40){
//         if(s1>= 33 && s2>= 33 && s3>= 33){
//             printf("The student has passed the exam!!!\n");
//         }
//         else{
//             printf("The student has failed in any subject\n");
//         }
//     }
//     else{
//         printf("The student has failed the examination\n");
//     }
//     return 0;
// }



#include<stdio.h>

int main(){
    float s1, s2, s3, t;
    printf("Enter the marks of subject 1: \n");
    scanf("%f" , &s1);

    printf("Enter the marks of subject 2: \n");
    scanf("%f" , &s2);

    printf("Enter the marks of subject 3: \n");
    scanf("%f" , &s3);

    t= (((s1+ s2+ s3)/300)*100);

    if(t>= 40){
        printf("The student has passed the overall exam!!!\n");
    }
    else{
        printf("The student has failed the overall examination\n");
    }
    if(s1< 33){
        printf("The student has failed in subject 1\n");
    }
    if(s2< 33){
        printf("The student has failed in subject 2\n");
    }
    if(s3< 33){
        printf("The student has failed in subject 3\n");
    }
    return 0;
}