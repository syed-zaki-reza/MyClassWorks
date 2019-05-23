#include<stdio.h>
int main(){

int i,j,n,a[100],temp=0,x,y;
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array element:");
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}

  for(i=1;i<n;i++){
    for(j=i;j>0;--j){
       if(a[j]<a[j-1]){
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
       }
       else{
        break;
       }
    }
}
printf(" \narray element:");
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


  for(i=1;i<n+x;i++){
    for(j=i;j>0;--j){
       if(a[j]<a[j-1]){
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
       }
       else{
        break;
       }
    }
}
printf(" \nLatest Array Element:");
for(i=0;i<n+x;i++){
   printf("%d ",a[i]);
}

return 0;
}
