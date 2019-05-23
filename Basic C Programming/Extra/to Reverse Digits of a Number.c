/*
* C Program to reverse the digits of a number
*/
#include <stdio.h>
#include <conio.h>
 
int main(){
    int number, reverse = 0, rightDigit;
    printf("Enter a number \n");
    scanf("%d", &number);
    while(number != 0){
        rightDigit = number % 10;
        reverse = (reverse * 10) + rightDigit;
        number = number/10;
    }   
    printf("Reversed number : %d\n", reverse);
     
    getch();
    return 0;
}
