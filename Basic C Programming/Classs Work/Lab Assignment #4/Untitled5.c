#include<stdio.h>

float lp(float n,float x)
{
    float pn=1;

    if(n>0)
    {
        pn=((((2*n-1)/n)*x)*lp(n-1,x))-(((n-1)/n)*lp(n-2,x));
    }
    return pn;
}

void main()
{
    float x,y,ans=1,m; int i;

    printf("\n  Please Enter The Value Of 'n' :\n\n\t\t\t");
    scanf("%f",&m);

    printf("\n\n  Please Enter The Value Of 'x' :\n\n\t\t\t");
    scanf("%f",&y);

    if(y>=-1 && y<=1)
    {
        for(i=0;i<=m;i++)
        {
            ans=lp(i,y);
            //printf("\n\n\n\tYour Answer For %d No. Is :\n\n\t\t\t %f ",i,ans);
            printf("\n \t\t\t %d no. : %f",i,ans);
        }
    }

    else
    {
        printf("\n\n\n\n\n");
        printf("  Sorry, 'x' Is Not Between -1 & 1.\n");
    }
    printf("\n\n\n\n\n");
}
