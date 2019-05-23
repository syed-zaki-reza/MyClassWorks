#include<stdio.h>

int main()
{
    int n,i;

    printf("Please Enter The Element Number : \n\t");
    scanf("%d",&n);
    printf("\n\n\n");

    int ar[n],*p,s=0;

    p=ar;

    for(i=0;i<n;i++)
    {
        printf("Please Enter %d No. Element\n\t",i+1);
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++)
    {
        s+=*p;
        p++;
    }

    printf("\n\n\nSum Of All Number : %d",s);
}
