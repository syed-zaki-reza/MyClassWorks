/*
* C Program to find maximum  array elements
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int inputArray[500], elementCount, counter, max, min;

    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }

    max = min = inputArray[0];
    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] > max)
            max = inputArray[counter];
        else if(inputArray[counter] < min)
            min = inputArray[counter];
    }

    printf("Maximum Element : %d\n", max);
    printf("Minimum Element : %d", min);

    getch();
    return 0;
}
