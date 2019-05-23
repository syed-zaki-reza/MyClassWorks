#include<stdio.h>
#include<string.h>

void main()
{
    char s[300],s1[300];
    int i,s2[300],k=0;

    printf("\n Please Enter Some Numbers as String : \n\n\t");
    gets(s);

    for(i=0;i<300;i++)
    {
        if (isdigit(s[i])!=0)
        {
            s2[k]=(int) s[i];
            s1[k]=s[i];
            k++;
        }

        if(s[i]=='\0') break;
    }

    for(i=0;i<k;i++)
    {
        printf("\n %c's ASCII Code is :  %d",s1[i],s2[i]);
    }

    printf("\n\n\n");
}
