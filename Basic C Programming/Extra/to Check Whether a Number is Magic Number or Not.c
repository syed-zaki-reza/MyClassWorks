

/*
* C program to check a number is magic number or not
*/
#include<stdio.h>
#include<conio.h>

int getReverse(int num);
int getSumOfDigit(int num);

int main () {
    int num, digitSum, reverse;

    printf("Enter a number\n");
    scanf("%d", &num);

    digitSum = getSumOfDigit(num);

    reverse = getReverse(digitSum);

    if ((digitSum * reverse) == num) {
        printf("%d is a Magic Number\n", num);
    } else {
        printf("%d is not a Magic Number\n", num);
    }

    getch();
    return 0;
  }

int getReverse(int num) {
    int r = 0;
    while (num > 0) {
        r = (r * 10) + (num % 10);
        num = num / 10;
    }
    return r;
  }


int getSumOfDigit(int num){
    int sum = 0;
    while(num != 0){
        sum = sum + num%10;
        num = num/10;
    }
    return sum;
}
