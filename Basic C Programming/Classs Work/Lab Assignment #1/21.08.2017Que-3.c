/*Write a C program that computes the number of seconds in a year*/
#include<stdio.h>
void main()
{
    long int y,x,t;
    printf("Please Enter The Year: \n");
    scanf("%d",&y);

    if ((y%400==0)||((y%100!=0)&&(y%4==0)))
        x=366;

    else x=365;
    t=x*24*60*60;

    printf("Number of Seconds in Year %ld : %d \n",y,t);
}
/*Write a C program that computes the number of seconds in a year*/
