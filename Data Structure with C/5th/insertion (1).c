#include<stdio.h>

int main(){

int n,i,j,a[100],temp=0;
printf("Enter number of array:");
scanf("%d",&n);
printf("Enter the array element:");
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
   printf("%d",a[i]);
}

return 0;
}
