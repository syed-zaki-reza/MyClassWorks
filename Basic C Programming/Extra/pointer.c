#include<stdio.h>

void main()
{

    int i,*p;
    printf("Enter the Value\n");
    scanf("%d",&i);
    p=&i;
    printf("%p\n",p);
}
