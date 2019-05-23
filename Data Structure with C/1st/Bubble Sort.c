#include <stdio.h>

int main()
{
    int i, j, temp, n, k;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter %d number(s): ", n);

    for(i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }

    printf("\n");

    for(i = 0 ; i < n - 1 ; i++){
        for(j = 0 ; j < n - 1 - i ; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

        /*printf("Pass %d: ", i + 1);

        for(k = 0 ; k < n ; k++)
        {
            printf("%d ", a[k]);
        }

        printf("\n\n");*/
    }

    printf("\nSorted array is: ");

    for(i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
