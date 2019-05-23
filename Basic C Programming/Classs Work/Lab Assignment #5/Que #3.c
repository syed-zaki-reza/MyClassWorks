#include<stdio.h>

void main()
{
    float sm[3][3],mt1[3][3],mt2[3][3];
    int i,j;

    printf("\n Please Enter Value for 1st Matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&mt1[i][j]);
        }
    }

    printf("\n You Have Entered Values for 1st Matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %.2f",mt1[i][j]);
        }
        printf("\n");
    }

    printf("\n Please Enter Value for 2nd Matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&mt2[i][j]);
        }
    }

    printf("\n You Have Entered Values for 2nd Matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %.2f",mt2[i][j]);
        }
        printf("\n");
    }

    printf("\n Sum of Matrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %.2f",mt1[i][j]+mt2[i][j]);
        }
        printf("\n");
    }
}
