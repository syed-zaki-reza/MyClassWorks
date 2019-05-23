#include<stdio.h>

void main()
{
    int a,b,c,d,i,j,k,sum=0;

    printf("\n Size of 1st Matrix MxN \n \n Please Enter 'M' & 'N' :\n");
    scanf("%d %d",&a,&b);

    printf("\n Size of 2nd Matrix MxN \n \n Please Enter 'M' & 'N' :\n");
    scanf("%d %d",&c,&d);

    int ar1[a][b],ar2[c][d],mul[a][d];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\n A: %d no. Row %d no. Coloumn : ",i+1,j+1);
            scanf("%d",&ar1[i][j]);
        }
    }

    printf("\n\n\n 1st Matrix : \n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("  %d",ar1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("\n B: %d no. Row %d no. Coloumn : ",i+1,j+1);
            scanf("%d",&ar2[i][j]);
        }
    }

    printf("\n\n\n 2nd Matrix : \n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("  %d",ar2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            mul[i][j]=0;

            for(k=0;k<a;k++)
            {
                mul[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }



    printf("\n\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("  %d",mul[i][j]);
        }
        printf("\n");
    }
}
