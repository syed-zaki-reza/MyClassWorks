#include<stdio.h>
int main()
{
    int i,j,k,ar1[100][100],ar2[100][100],n,x,y;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }

    printf("Enter the vertices1:");
    scanf("%d",&x);
    printf("\nEnter the vertices2:");
    scanf("%d",&y);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar1[i][j]>=1)
            {
                ar2[i][j]=ar1[i][j];
            }
            else
            {
                ar2[i][j]=9999;
            }
        }
    }

    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
               if( ar2[i][j]<(ar2[i][k]+ar2[k][j]))
               {
                   ar2[i][j]=ar2[i][j];
               }
               else
               {
                   ar2[i][j]=(ar2[i][k]+ar2[k][j]);
               }
            }
        }
    }
    printf(" /nshortest path length from %d to %d is: %d\n",x,y,ar2[x-1][y-1]);


    return 0;

}
