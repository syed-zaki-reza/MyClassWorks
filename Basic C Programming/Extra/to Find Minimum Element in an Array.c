/*
* C Program to find minimum element in an array
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int minElement, inputArray[500], minElementPosition;
    int elementCount, counter;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    minElement = inputArray[0];
    minElementPosition = 0;

    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] < minElement){
            minElement = inputArray[counter];
            minElementPosition = counter;
        }
    }
    printf("Minimum element in array is %d at index %d",
        minElement, minElementPosition);

    getch();
    return 0;
}
