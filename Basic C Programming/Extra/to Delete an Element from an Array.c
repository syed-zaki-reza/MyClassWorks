/*
* C Program to delete an element from an array
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int inputArray[500], elementCount, counter, index;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }

    printf("Enter index from where you want to delete an element\n");
    scanf("%d", &index);

    for(counter = index; counter < elementCount - 1; counter++){
        inputArray[counter] = inputArray[counter+1];

    printf("Updated Array\n");
    for(counter = 0; counter < elementCount - 1; counter++){
        printf("%d ", inputArray[counter]);
    }

    getch();
    return 0;
}
