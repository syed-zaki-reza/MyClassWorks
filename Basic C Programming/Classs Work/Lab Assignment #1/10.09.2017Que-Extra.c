#include<stdio.h>
void main()
{
    int y[5],a=0,b=0,i,j,c=0;
    printf("\n please enter your age \n");


    for(j=0;j<5;j++)
    {
        scanf("%d",&y[j]);
    }


    for (i=0;i<5;i++)
    {
         if (y[i]<20)
             {
                 a=a+1;
             }
         else if (y[i]>20)
             {
                b=b+1;
             }
         else if (y[i]=20)
             {
                c=c+1;
             }
    }
    printf("\n Less Then 20= %d \n",a);
    printf("\n More Then 20= %d \n",b);
    printf("\n Equal To 20= %d \n",c);
}
