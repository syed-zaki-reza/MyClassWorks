#include<stdio.h>

int main()
{
    int n,i,j,k,ar1[100][100],ar2[100][100];
    printf("Enter the number of vertices: ");
    scanf("%d",&n);

    printf("Enter elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar1[i][j]>=1){
                ar2[i][j]=1;
            }
            else{
                ar2[i][j]=0;
            }
        }
    }
    for(k=0;k<n;k++){
     for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            ar2[i][j]=ar2[i][j]||(ar2[i][k]&&ar2[k][j]);
        }
    }
}

printf("\nPath Matrix: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",ar2[i][j]);
        }
     printf("\n");
    }

return 0;
}



