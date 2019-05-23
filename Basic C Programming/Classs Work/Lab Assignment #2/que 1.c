#include<stdio.h>

void main()
{
    int b,c,d=0,n,av;
    printf("Please Enter List Number\n");
    scanf("%d",&n);

    int a[n];

    for (b=1;b<=n;b++)
    {
        printf("Enter The %d No. Element \n",b);
        scanf("%d",&a[b]);
    }

    for(c=n;c>0;c--)
    {

        d=a[c]+d;
    }

    av=d/n;

    printf("\n\n\n Sum of Numbers Is = %d\n",d);
    printf("Average of Numbers Is = %d",av);
}
