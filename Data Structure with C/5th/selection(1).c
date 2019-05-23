#include<stdio.h>

int main()
{
int i,j,n,a[100],temp=0;
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array element:");
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}

 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
    }
}
printf(" \nSorted Array Element: ");
for(i=0;i<n;i++){
   printf("%d ",a[i]);
}

return 0;
}
