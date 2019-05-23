#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, Sum;
    float Avarage;
    printf("Please Enter The 1st Number \n");
    scanf("%d",&x);
    printf("Please Enter The 2nd Number \n");
    scanf("%d",&y);
    Sum=x+y;
    Avarage=Sum/2.0000000000000000000;
    printf("Sum of The Two Numbers Are: %d \n",Sum);
    printf("Avarage of The Two Numbers Are: %f \n",Avarage);
    return 0;
    getch();

}
