#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x,*pt,i,j,tp;

    printf("Please Give Allocation Number");
    scanf("%d",&x);

    printf("\n\n\n")

    pt=(int*)malloc(x*sizeof(int));

    for(i=0;i<x;i++)
    {
        printf("Please Enter %d No. Value \n",++i);
        scanf("%d",pt);
        pt++;
    }

    for(i=x-1;i>=0;i--)
    {
        for(j)
    }

}
