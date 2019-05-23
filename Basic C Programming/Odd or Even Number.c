#include<stdio.h>
int main()
{
    int x, y;
    printf("Please Enter The Number \n");
    scanf("%d",&x);
    y=x%2;
    if (y==0){ printf("The Number Is Even \n");}
    else if(y!=0){ printf("The Number Is Odd \n");}
    return 0;
}
