#include <stdio.h>

#define max 30

void selection_sort(int n, int ar[]);
void read(int n, int ar[]);

void main()
{
    int n, ar[max], i, j;

    printf("\n Please Enter List Size :  ");
    scanf(" %d", &n);

    printf("\n Please Enter Array :  \n");

    for(i = 0; i < n; i++)
    {
        scanf(" %d", &ar[i]);
    }

    read( n, ar);

    selection_sort(n, ar);

    printf("\n\n Sorted Array :  \n");
    read( n, ar);
    printf("\n\n\n");
}




void selection_sort(int n, int ar[])
{
    int i, j, tp;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ar[j] < ar[i])
            {
                tp = ar[j];
                ar[j] = ar[i];
                ar[i] = tp;
            }
        }
    }
}




void read(int n, int ar[])
{
    int i;

    printf("\n New Array :\n");

    for(i = 0; i < n; i++)
    {
        printf("    %d", ar[i]);
    }

    printf("\n");
}
