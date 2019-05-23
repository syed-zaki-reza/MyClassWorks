#include<stdio.h>

void main()
{
    int a,b,i,j;

    printf("\n Please Enter Value for AxB :\n\n");

    printf("\n Please Enter Value for 'A' : ");
    scanf("%d",&a);

    printf("\n Please Enter Value for 'B' : ");
    scanf("%d",&b);

    float ar[a][b],s[a];

    printf("\n\n\n Please Enter The Values For Matrix : \n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\n %d no. Row, %d no. Column : ",i+1,j+1);
            scanf("%f",&ar[i][j]);
        }
    }

    printf("\n\n\n Given Array : \n\n");
    for(i=0;i<a;i++)
    {
        printf("|");
        for(j=0;j<b;j++)
        {
            printf("  %.2f",ar[i][j]);
        }
        printf("|\n");
    }

    for(i=0;i<a;i++)
    {
        s[i]=0;
        for(j=0;j<b;j++)
        {
            s[i]+=ar[i][j];
        }
    }

    printf("\n\n\n Sum of Each Row : \n\n");

    for(i=0;i<a;i++)
    {
        printf("|");

        printf("%.2f",s[i]);

        printf("|\n");
    }

    printf("\n\n\n");
}
