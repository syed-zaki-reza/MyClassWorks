#include<stdio.h>

int sumar(int *p,int m)
{
    int s=0,i;

    for(i=0;i<m;i++)
    {
        s+=*(p+i);
    }
    return s;
}

void main()
{
    int n,i,*p;

    printf("Please Enter Array Size :   ");
    scanf("%d",&n);
    printf("\n\n\n\n\n");

    int ar[n],s=0;

    for(i=0;i<n;i++)
    {
        printf("Please Enter %d No. Element : \t",i+1);
        scanf("%d",&ar[i]);
        printf("\n");
    }

    p=ar;

    s=sumar(p,n);

    printf("\n\n\n\t Sum of the Elements : \n\n\t\t\t %d\n\n\n",s);
}
