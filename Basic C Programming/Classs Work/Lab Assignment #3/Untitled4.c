m#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,*pt,i,j,tp;

    printf("Please Enter Amount Of Numbers : \n");
    scanf("%d",&n);

    printf("\n\n\n");


    pt=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",pt+i);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(pt+i)>*(pt+j))
            {
                tp=*(pt+i);
                *(pt+i)=*(pt+j);
                *(pt+j)=tp;
            }
        }}
        for(i=0;i<n;i++)
        {
         printf("\n%d\n",*(pt+i));
        }

}
