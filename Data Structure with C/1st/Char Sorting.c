#include<stdio.h>
#include<string.h>

int x=100;

main()
{
    char i,ar[100][x],j,n=0,k[30],l=0;

    printf(" Give Characters :");
    printf("\n\n Write 'exit' for End: \n");

    for(i=0;i<100;i++)
    {
        printf("\n \t") ;
        scanf("%s",&ar[i]);

        strcpy(k,ar[i]);
        n++;

        if(k[0]=='E'&&k[1]=='X'&&k[2]=='I'&&k[3]=='T'||
           k[0]=='E'&&k[1]=='x'&&k[2]=='i'&&k[3]=='t'||
           k[0]=='e'&&k[1]=='x'&&k[2]=='i'&&k[3]=='t')
        {
            printf("\n\n \t\t******You Will Exit Now******\n");
            ar[i][0]='\0';
            break;
        }
    }

    n--;
    printf("\n\n\n");

    for(j=0;j<n;j++)
    {
       for(i=0;i<n-j;i++)
        {
              if(ar[i][l]>ar[i+1][l])
                {
                    strcpy(k,ar[i]);
                    strcpy(ar[i],ar[i+1]);
                    strcpy(ar[i+1],k);
                }

        }
    }

    for(i=0;i<=n;i++)
    {
        printf("\t");
        puts(ar[i]);
    }

    printf("\n\n\n");
}
