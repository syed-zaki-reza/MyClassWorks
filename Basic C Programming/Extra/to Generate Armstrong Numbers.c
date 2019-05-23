
/*
* C Program to generate armstrong number
*/
#include <stdio.h>
#include <conio.h>

int getCubicSumOfDigits(int number);
int main(){
    int number, sum, counter;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Armstrong numbers between 0 and %d\n", number);
    for(counter = 0; counter <= number; counter++){
        sum = getCubicSumOfDigits(counter);
        if(sum == counter){
            printf("%d\n", counter);
        }
    }
    getch();
    return 0;
}

int getCubicSumOfDigits(int number){
    int lastDigit, sum = 0;
    while(number != 0){
        lastDigit = number%10;
        sum = sum + lastDigit*lastDigit*lastDigit;
        number = number/10;
    }
    return sum;
}
