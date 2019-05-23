#include<stdio.h>
int main()
{
  int x, y;
    printf("Please, Enter The 1st Number: \n");
    scanf("%d",&x);
    printf("Please, Enter The 2nd Number: \n");
    scanf("%d",&y);
    if (x==y) printf("%d is equal to %d",x,y);
    else if(x>y) printf("%d is bigger than %d",x,y);
    else if(y>x) printf("%d is bigger than %d",y,x);
    return 0;
}
