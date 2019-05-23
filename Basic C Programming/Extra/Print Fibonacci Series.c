/*
* C Program to print fibonacci series
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int terms, lastNumber=1,secondLast=0,currentNumber=0,counter;
    printf("Enter number of terms in Fibonacci series: ");
    scanf("%d", &terms);
    /*
     *  Nth term = (N-1)th therm + (N-2)th term;
     */
    for(counter = 0; counter < terms; counter++){
        if(counter < 2){
            currentNumber = counter;
        } else {
            currentNumber = lastNumber + secondLast;
            secondLast = lastNumber;
            lastNumber = currentNumber;
        }
        printf("%d ", currentNumber);
    }
    getch();
    return 0;
}
