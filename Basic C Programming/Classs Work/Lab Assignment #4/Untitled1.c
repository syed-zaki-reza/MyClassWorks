#include<stdio.h>

int three(int x,int y,int z)
{
    int m;

    if (x>y&&x>z)
    {
        m=x;
    }

    else if (y>x&&y>z)
    {
        m=y;
    }

    else if (z>x&&z>y)
    {
        m=z;
    }

    return m;
}

void main()
{
    int a,b,c,q;

    printf("Please Enter 1st Value : \t");
    scanf("%d",&a);

    printf("\nPlease Enter 2nd Value : \t");
    scanf("%d",&b);

    printf("\nPlease Enter 3rd Value : \t");
    scanf("%d",&c);

    q=three(a,b,c);

    printf("\n\n\t Largest Number :\t %d\n\n\n\n\n",q);
}
