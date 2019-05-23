/*Write a C program that inputs three floating point numbers and then display their sum , average & multiplication */
#include<stdio.h>
int main()
{
    float x,y,z,sum,average,multiplication;
    printf("Please, Enter The 1st Number \n");
    scanf("%f",&x);
    printf("Please, Enter The 2nd Number \n");
    scanf("%f",&y);
    printf("Please, Enter The 3rd Number \n");
    scanf("%f",&z);

    sum=x+y+z;

    average=sum/3.000000;

    multiplication=x*y*z;

    printf("Sum of the numbers: %f \n",sum);
    printf("Average of the numbers: %f \n",average);
    printf("multiplication of the numbers: %f \n",multiplication);
    return 0;

}
/*Write a C program that inputs three floating point numbers and then display their sum , average & multiplication */
