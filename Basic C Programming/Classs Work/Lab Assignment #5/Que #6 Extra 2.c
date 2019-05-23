#include<stdio.h>
#include<math.h>

void main()
{
    int x=0,i,k=0,l=0,j=0,nm[300];
    char a,num[300],nu1[300],nu2[300],str[300];

    printf("\n Please Enter A Number String : \n\t");
    gets(num);

    for(i=0;i<300;i++)
    {
        if (isdigit(num[i])!=0)
        {
            nu1[k]=num[i];
            nu1[k+1]='\0';
            k++;
        }

        if(num[i]=='\0') break;
    }

    for(i=k;i>=0;i--)
    {
        if(nu1[i]!='\0')
        {
            nu2[l]=nu1[i];
            nu2[l+1]='\0';
            l++;
        }
    }
    nu2[k+1]='\0';

    for(i=0;i<300;i++)
    {
        nm[i]=nu2[i]-48;
        if(nu2[i+1]=='\0') break;
    }

    for(i=0;i<300;i++)
    {
        if(nu1[i]=='\0') break;

        x+=2+(nm[i]*pow(10,j));
        j++;

    }

    printf("\n\n\n Value of String = %d \n which is : \"%s\"",x,nu1);

   // printf("\n\n Please Enter A Sequence Of Number As String :\n\t");
   // gets(str);

}
