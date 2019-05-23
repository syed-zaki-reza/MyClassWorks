#include<stdio.h>

void main()
{
    int n,i,j;

    printf("\n  Please Enter Students Amount : ");
    scanf("%d",&n);

    float ar[n][6];

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n  Enter GP(Grade Point) for Student ID. 000%d Course#%d : ",i+1,j+1);
            scanf("%f",&ar[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        ar[i][5]=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            ar[i][5]=ar[i][5]+(ar[i][j]/5);
        }
    }

    printf("\n\n\n\t\t   -------Result-------\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            if (j<5) printf("\n\n       Student ID. 000%d Course#%d, GP : %f",i+1,j+1,ar[i][j]);

            else if (j==5) printf("\n\n\n\t\t  GPA (Grade Point Average) : %f \n\n\n",ar[i][5]);
        }
    }
}
