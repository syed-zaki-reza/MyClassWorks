#include<stdio.h>

void main()
{
    int b=1,c=1,n,i,j,d=0;

    printf("Please Enter The Number You Want To Count\n\n");
    scanf("%d",&n);

    int a[n-1];

    for(i=0;i<n;i++)
    {
         printf("\nPlease Enter %d no. Number\n",b);
         scanf("%d",&a[i]);
         printf("You Have Enter This Number : %d\n",a[i]);
         b=b+1;
    }

    int sm=a[0],la=a[0];

    for(j=0;j<n;j++)
    {
        if(a[j]>la)
        {
            la=a[j];
        }
        if(a[j]<sm)
        {
            sm=a[j];
        }


    }
    printf("\n\n %d Is Big and %d Is Small \n",la,sm);
}
