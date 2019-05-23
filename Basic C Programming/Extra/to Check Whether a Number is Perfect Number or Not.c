
/*
* C program to check whether a number is perfect number or not
*/
#include<stdio.h>
#include<conio.h>

int main () {
    int num, i, divSum;

    printf("Enter a number\n");
    scanf("%d", &num);


    for (divSum = 0, i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            divSum += i;
        }
    }

    if (divSum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);

    getch();
 return 0;
}
