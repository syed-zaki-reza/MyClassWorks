/* Question : Sum of Two Matrix */

#include<stdio.h>

void main()
{
    int i,j,a=3,b=3,n=0,m=2;

    printf("\n\n  What Kind of Matrix Do You Want? [Example : AxB]");
    printf("\n\n\n  Select : \n\t1)3x3 \n\t2)2x2 \n\t3)Others \n\n\t\t  Selection : ");
    scanf("%d",&n);
    printf("\n\n");

    if(n==1)
    {
        a=b=3;
    }

    else if(n==2)
    {
        a=b=2;
    }

    else if(n==3)
    {
        printf("\n  Please Enter Value for 'A' :\n");
        scanf("%d",&a);
        printf("\n  Please Enter Value for 'B' :\n");
        scanf("%d",&b);
    }

    float a1[a][b],a2[a][b],s[a][b];

    if(n!=1&&n!=2&&n!=3)
    {
        printf("\n\n\n\t\t\t\t-------INVALID SELECTION-------\n\n\n");
        goto endings;
    }

    printf("\n\n\n");



    printf("  Do You Wnat to Enter Values in 'Just Numerical Order' or, 'Knowing Row & Column'?\n\tSelect :\n\t\t 1) Just Numerical Order    or,    2) Knowing Row & Column \n\n\t\t\t  Selection : ");
    scanf("%d",&m);

    printf("\n\n\n");

    if(m==1)
    {
        printf("\n  Please Enter Values for %dx%d Matrix :\n",a,b);

        printf("\n\n  Please Enter Values for 1st Matrix :\n\n\n");

        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                scanf("%f",&a1[i][j]);
            }
        }

        printf("\n\n\n");

        printf("\n\n   First Matrix :\n\n");

        for(i=0; i<a; i++)
        {
            printf("|");
            for(j=0; j<b; j++)
            {
                printf(" %.2f ",a1[i][j]);
            }
            printf("|");
            printf("\n");
        }

        printf("\n\n\n  Please Enter Values for 2nd Matrix :\n\n\n");

        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                scanf("%f",&a2[i][j]);
            }
        }

        printf("\n\n\n");

        printf("\n\n   Second Matrix :\n\n");

        for(i=0; i<a; i++)
        {
            printf("|");
            for(j=0; j<b; j++)
            {
                printf(" %.2f ",a2[i][j]);
            }
            printf("|");
            printf("\n");
        }
    }

    else if(m==2)
    {
        printf("\n  Please Enter Values for %dx%d Matrix :\n",a,b);

        printf("\n\n  Please Enter Values for 1st Matrix :\n\n\n");

        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("\nEnter for Row. %d & Column. %d\n",i+1,j+1);
                scanf("%f",&a1[i][j]);
            }
        }

        printf("\n\n\n");

        printf("\n\n   First Matrix :\n\n");

        for(i=0; i<a; i++)
        {
            printf("|");
            for(j=0; j<b; j++)
            {
                printf(" %.2f ",a1[i][j]);
            }
            printf("|");
            printf("\n");
        }

        printf("\n\n\n  Please Enter Values for 2nd Matrix :\n\n\n");

        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("\nEnter for Row. %d & Column. %d\n",i+1,j+1);
                scanf("%f",&a2[i][j]);
            }
        }

        printf("\n\n\n");

        printf("\n\n   Second Matrix :\n\n");

        for(i=0; i<a; i++)
        {
            printf("|");
            for(j=0; j<b; j++)
            {
                printf(" %.2f ",a2[i][j]);
            }
            printf("|");
            printf("\n");
        }
    }

    else
    {
        printf("\n\n\n\t\t\t\t-------INVALID SELECTION-------\n\n\n");
        goto ending;
    }

    printf("\n\n\n");

    printf("\n\n  Sum : \n\n");

    for(i=0; i<a; i++)
    {
        printf("|");
        for(j=0; j<b; j++)
        {
            printf(" %.2f ",a1[i][j]);
        }
        printf("|");

        if(i==a/2)
        {
            printf("      +     ");
        }

        else
        {
            printf("            ");
        }

        printf("|");
        for(j=0; j<b; j++)
        {
            printf(" %.2f ",a2[i][j]);
        }
        printf("|");

        printf("\n");
    }

    printf("\n\n\n");

    printf("\n\n   Sum of Two Matrix :\n\n");

    for(i=0; i<a; i++)
    {
        printf("|");
        for(j=0; j<b; j++)
        {
            printf(" %.2f ",a1[i][j]+a2[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\n\n\n");

    endings:
        ending : printf("\n\n\n\t\t\t\t     -------THE END-------\n\n\n\n\n");
}
