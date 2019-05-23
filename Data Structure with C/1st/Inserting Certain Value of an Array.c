#include<stdio.h>
main()
{
    int n,j,loc,value,arr[100];

    printf("select array size: ");
    scanf("%d",&n);

    printf("\n\nGive array : \n");

    for (j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);

    }

    printf("\nselect value location:\n");
    scanf("%d", &loc);


    printf("\nselect value :\n");
    scanf("%d", &value);

    for (j=n;j>=loc-1;j--)
    {
        arr[j]=arr[j-1];


    }

    arr[loc-1]=value;

    printf("\n Array : \n");

    for (j=0;j<n+1;j++)
    {
        printf("\n%d", arr[j]);


    }

    printf("\n *****THE END*****: \n");
}
