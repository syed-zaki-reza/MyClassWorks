 #include<stdio.h>

int main ()
{
	int n,p=0;
	printf("n = ");
	scanf("%d",&n);
	int num[n], i, j;
	for(i=0 ; i<n ; i++)
	{
		printf("%d-th number : ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		int x=0;
		for(j=0 ; j<n ; j++)
		{
			if(num[i] == num[j])
			{
				x = x + 1;
				if(x>= 2)
					{
					printf("\n YES DUPLICATE\n and they are : \n\n");
				    break;
				    }
			}
		}
		if(x>=2)
		{
			break;
		}
		else
		{
			p = p + 1;
			if(p==n)
			{
				printf("\n NO DUPLICATE.\n");
			}
		}
	}


	int temp=-333;
	for(i=0 ; i<n ; i++)
	{
		int y=0;
		for(j=0 ; j<n ; j++)
		{
			if(num[i] == num[j])
			{
				y = y + 1;
				if(y > 1)
				{
					num[j] = temp - 1;
				}
			}
		}
		if(y>1)
		{
			if(num[i] > -1)
			{
				printf("%d number is %d times\n",num[i],y);
			}
		}
	}
	return 0;
}
