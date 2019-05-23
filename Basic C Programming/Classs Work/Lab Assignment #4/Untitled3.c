#include<stdio.h>

int res(int a)
{
    int f=1;

    if(a>1)
    {
        f=res(a-1)*a;
    }
    return f;

}

void main()
{
    int x,y;
    printf("Please Enter a Value :   ");
    scanf("%d",&x);

    y=res(x);

    printf("\n\n\n Factorial Of ' %d ' Is :   %d",x,y);
}
