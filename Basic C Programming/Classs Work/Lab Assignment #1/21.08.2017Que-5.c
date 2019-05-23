#include <stdio.h>
#include <math.h>
#define pi 3.1416
void main()
{
    float a,b,c,i,ii,iii,iv,v,vi;
    printf("\n please enter the value of a=");
    scanf("%f",&a);
    printf("\n please enter the value of b=");
    scanf("%f",&b);
    printf("\n please enter the value of c=");
    scanf("%f",&c);

    i=a+2*b+a*c;

    ii=a*a+2*b+c*c;

    iii=(a+b+c)/(2*c*(a+b));

    iv=a*a+2*sqrt(b)*c*c+2*a*c;

    v=a*a*a+b*b*b;

    vi=(a*a*a+b*b*b)/2*(a*a+b*b)+(a*a*a/b*b*b);
    printf("%f",pi);
    printf("\n \n  \n \n \n");
    printf("\n \n (i)a+2b+ac= %f",i);
    printf("\n \n (ii)a^2+2b+c^2= %f",ii);
    printf("\n \n (iii)a+(b+c)/2c(a+b)= %f",iii);
    printf("\n \n (iv)a^2+2b^-2c^2+2ac= %f",iv);
    printf("\n \n (v)a^3+b^3= %f",v);
    printf("\n \n (vi)(a^3+b^3)/2(a^2+b^2)+a^3/b^3= %f",vi);
}
