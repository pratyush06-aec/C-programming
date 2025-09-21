// #include<stdio.h>
// int main(){
//     int r;

//     printf("Enter the radius of the circle: " , r);
//     scanf("%d" , &r);

//     printf("The area of te circle is: %f\n" , (3.14*(r*r)));
//     return 0;
// }




#include<stdio.h>
int main(){
    int r, h;

    printf("Enter the radius of the cylinder: " , r);
    scanf("%d" , &r);

    printf("Enter the height of the cylinder: " , h);
    scanf("%d" , &h);

    printf("The volume of the cylinder is: %f\n" , (3.14*(r*r*(h))));

    return 0;
}