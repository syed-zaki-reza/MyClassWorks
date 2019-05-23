#include <stdio.h>

#define max 30

void insertion_sort(int n, int ar[]);
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

    insertion_sort(n, ar);

    printf("\n\n Sorted Array :  \n");
    read( n, ar);
    printf("\n\n\n");
}





void insertion_sort(int n, int ar[])
{
    int i, j, tp;

    for(i = 1; i < n; i++)
    {
        tp = ar[i];
        j = i-1;

        while(j >= 0 &&  ar[j] > tp)
        {
            ar[j+1] = ar[j];
            j--;
        }

        ar[j+1] = tp;
    }
}






void read(int n, int ar[])
{
    int i;

    printf("\n Array :");

    for(i = 0; i < n; i++)
    {
        printf("  %d  ", ar[i]);
    }

    printf("\n");
}
