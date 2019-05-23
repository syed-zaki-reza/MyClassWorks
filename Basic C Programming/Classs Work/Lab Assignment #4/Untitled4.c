#include<stdio.h>
#include<string.h>

void revr(char *a)
{
    if (*a!='\0')
    {
        revr(a+1);
        printf("%c ",*a);
    }
}

void main()
{
    char c[1000];

    gets(c);

    revr(c);
}
