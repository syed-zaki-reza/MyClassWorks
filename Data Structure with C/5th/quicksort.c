#include<stdio.h>
int partition(int arr[],int lb,int ub)
{
    int i,j,pi,temp;
    i=lb-1;
    pi=arr[ub];
    for(j=lb;j<ub;j++)
    {
        if(pi>arr[j])
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    temp=arr[i];
    arr[i]=pi;
    arr[ub]=temp;
    return i;
}
void qc(int arr[],int lb,int ub)
{
    int pi;
    if(lb<ub)
    {
        pi=partition(arr,lb,ub);
        qc(arr,lb,pi-1);
        qc(arr,pi+1,ub);
    }
}
main()
{
    int n,i,arr[100];
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter element in array:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    qc(arr,0,n-1);
    printf("Array after sorting:");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
