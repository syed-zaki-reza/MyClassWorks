#include<stdio.h>
int main()
{
int i,j,n,a[100],temp=0,x,y;
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
printf(" \narray element: ");
for(i=0;i<n;i++){
   printf("%d ",a[i]);
}

printf("Enter m kotogula chaw:");
scanf("%d",&x);
for(i=0;i<x;i++){
printf("Enter data:");
scanf("%d",&y);
a[n+i]=y;
}

 for(i=0;i<n+x;i++){
    for(j=0;j<n+x;j++){
       if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }

    }

}
printf(" \narray element: ");
for(i=0;i<n+x;i++){
   printf("%d ",a[i]);
}

return 0;
}
