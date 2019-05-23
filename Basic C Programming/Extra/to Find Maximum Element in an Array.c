/*
* C Program to find maximum element in an array
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int maxElement, inputArray[500], maxElementPosition;
    int elementCount, counter;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    maxElement = inputArray[0];
    maxElementPosition = 0;

    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] > maxElement){
            maxElement = inputArray[counter];
            maxElementPosition = counter;
        }
    }

    printf("Maximum element in array is %d at index %d",
        maxElement, maxElementPosition);

    getch();
    return 0;
}
