/*
* C Program to delete duplicate elements from an sorted array
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int inputArray[500], elementCount, counter;
    int readIndex, writeIndex;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);

    printf("Enter %d numbers in increasing order \n", elementCount);
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] < inputArray[counter -1]){
            printf("Invalid Input: elements not in increasing order \n");
            return 1;
        }
    }
    for(readIndex=1, writeIndex=0; readIndex < elementCount; readIndex++){
        if(inputArray[readIndex] != inputArray[writeIndex]){
            writeIndex++;
            inputArray[writeIndex] = inputArray[readIndex];
        }
    }
    printf("Unique Elements\n");
    for(counter = 0; counter < writeIndex + 1; counter++){
        printf("%d ", inputArray[counter]);
    }

    getch();
    return 0;
}
