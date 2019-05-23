#include<stdio.h>

main()
{
    int mid,val, n, i,j, f,l;

    printf("\n Please Enter Array Size :  ");
    scanf("%d",&n);

    int ar[n];

    printf("\n Please Enter Array Elements :  \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("\n Please Enter the Element You Want to Search :  ");
    scanf("%d",&val);

    f=0;
    l=n-1;

    mid = (f+l)/2;
	while (f <= l)
	{


		if(ar[mid] < val)
		{
			f = mid + 1;

		}
		else if(ar[mid] == val)
		{
			printf("%d found at location %d\n", val, mid+1);
			break;
		}
		else
		{
			 l = mid - 1;
		}
		mid = (f+l)/2;

	}
}
