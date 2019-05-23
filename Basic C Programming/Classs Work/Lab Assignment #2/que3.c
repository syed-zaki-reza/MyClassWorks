#include<stdio.h>

void main()
{
    int b=1,c,i,j,n; float sum=0,av;

    printf("Please Enter How Many Numbers There Will Be\n");
    scanf("%d",&n);
    printf("\n\n\n");

    float a[n-1];

    for(i=0;i<n;i++)
    {
       printf("Please Enter %d no. Value\n",b);
       scanf("%f",&a[i]);
        printf("You Have Enter %f Number\n\n\n",a[i]);
        b++;
        sum=sum+a[i];
    }

    //printf("\n\n\n\n %f",sum);

    av=sum/n;

    for(j=0;j<n;j++)
    {

    }

}
