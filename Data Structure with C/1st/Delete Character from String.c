#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    int i,j,n;
    char str[20];

    printf("\nthe string  ");
    scanf("%s",str);

    printf("\nput character which have to delete\n\n");
    scanf("%s",&c);

    n=strlen(str);
    for(i=0,j=0;i<n;i++)
        {
            if(str[i]!=c)
            {
                str[j]=str[i];
                j++;
            }
        }

    str[j]='\0';

    printf("\n%s",str);
    return 0;
}
