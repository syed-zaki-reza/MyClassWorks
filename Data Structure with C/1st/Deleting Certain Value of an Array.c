
#include<stdio.h>

main()
{
    int i,j,n,loc;

    printf("\n Please Enter Array Size: ");
    scanf("%d", &n);

    int ar[100];

    printf("\n\n Please Enter Array Elements: \n");
    for(i=0;i<n;i++)
    {
        printf("\t");
        scanf("%d",&ar[i]);
    }

    printf("\n Please Enter Location :  ");
    scanf("%d", &loc);

    for(i=loc-1;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }

    printf("\n New Array :  ");
    for(i=0;i<n-1;i++)
    {
        printf("\n\t\t%d",ar[i]);
    }

    printf("\n\n\n\t****THE END****\n\n\n");
}
