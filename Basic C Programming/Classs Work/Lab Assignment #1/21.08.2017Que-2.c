/*Write a C program that computes the area/volume of a Cube*/
#include<stdio.h>
#include<math.h>
double main()
{
    double x,y,z,area,volume;
    printf("Please Enter The Length of The Cube: \n");
    scanf("%lf",&x);
    printf("Please Enter The Width of The Cube: \n");
    scanf("%lf",&y);
    printf("Please Enter The Hight of The Cube: \n");
    scanf("%lf",&z);

    area=2*((x*y)+(y*z)+(z*x));

    volume=x*y*z;

    printf("The Area of The Cube Is: %lf \n",area);
    printf("The Volume of The Cube Is: %lf \n",volume);
    return 0;
}
/*Write a C program that computes the area/volume of a Cube*/
