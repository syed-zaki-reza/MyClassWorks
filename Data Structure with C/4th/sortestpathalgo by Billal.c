#include<stdio.h>
main()
{
    int n,arr[100][100],p[100][100],i,j,k;
    printf("Enter vertix number:");
    scanf("%d",&n);
    printf("Enter matrix:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
        if(arr[i][j]==0)
            p[i][j]=444444;
            else
                p[i][j]=arr[i][j];
        }
        for(k=0;k<n;k++)
           for(i=0;i<n;i++)
        for(j=0;j<n;j++){
                p[i][j]=(p[i][j]<(p[i][k]+p[k][j]))?p[i][j]:(p[i][k]+p[k][j]);
        }

           for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d",p[i][j]);
        }
        printf("\n");

            }

}
