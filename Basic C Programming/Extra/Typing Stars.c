#include <stdio.h>

void main()
{
    int a,i,j,k;
    printf("Please Enter The Row Number: ");
    scanf("%d",&a);

    for(i=1;i=a;i++)
    {
        for(j=a-i;j>=1;j--)
        {
            printf(" ");
        }

        for(k=1;k<=(i*2)-1;k++)
        {
            printf("*");
        }

        printf(" a \n");
    }
}
