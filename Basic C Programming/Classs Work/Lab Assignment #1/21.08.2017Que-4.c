#include <math.h>
#include <stdio.h>
void main()
{
    float a,b,c,d;
    double w,x,y,z,u;

    printf("Please enter numbers for 'ax^2+bx+c=0' \n");
    printf("a:\n");
    scanf("%f",&a);
    printf("b:\n");
    scanf("%f",&b);
    printf("c:\n");
    scanf("%f",&c);

    w=(b*b-4*a*c);
    u= fabs(w);
    d= 2*a;
    z= sqrt(u);
    x= (-b+z)/d;
    y= (-b-z)/d;

    if (w>=0)
    {
       printf("answer is, x: %f, y: %f",x,y);
    }
    else if (w<=0)
    {
        printf("answer is, (-%f +/-%fi )/%f",b,z,d);
    }
    else if (w=0)
    {
        printf("answer is, %f",x);
    }
  }
