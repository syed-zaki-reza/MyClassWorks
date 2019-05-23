#include<stdio.h>

void main()
{
    int x;
    char st[100];

    printf("\n Please Enter String : \n\t");
    gets(st);

    printf("\n\n %d \n\n\n",atob(st));

    printf("\n Please Number : ");
    scanf("%d",&x);

    printf("Number String : %s ",itoa(x,st,10));
}
