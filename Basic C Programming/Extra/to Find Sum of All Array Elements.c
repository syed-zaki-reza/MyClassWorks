/*
* C Program to find sum of all array elements
*/
#include <stdio.h>
#include <conio.h>
  
int main(){
    int inputArray[500], elementCount, counter, sum = 0;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }

    for(counter = 0; counter < elementCount; counter++){
        sum += inputArray[counter];
    }
     
    printf("Sum of All Array Elements : %d", sum);
          
    getch();
    return 0;
}
