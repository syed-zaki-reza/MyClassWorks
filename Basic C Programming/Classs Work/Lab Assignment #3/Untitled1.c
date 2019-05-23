#include<stdio.h>

void main()
{
    int a=16,b=8; int *pa,*pb;

    pa=&a;

    pb=&b;

    printf("Value of X : \n %d \n& Its Address :\n %u \n",*pa,&pa);

    printf("Value of Y : \n %d \n& Its Address :\n %u \n",*pb,&pb);


    int x,y; int *px,*py;

    px=&x;

    py=&y;

    printf("Please Enter 1st Value : ");
    scanf("%d",px);

    printf("Please Enter 2st Value : ");
    scanf("%d",py);

    printf("1st Value : \n %d \n & Its Address : \n %u \n",x,&px);

    printf("2nd Value : \n %d \n & Its Address : \n %u \n",y,&py);


}
