/*
* C program to multiply two numbers without any arithmetic operator
*/
#include<stdio.h>
#include<conio.h>

int add(int num1, int num2);

int main() {
    int num1, num2, product = 0, i;
    printf ("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    for (i = 0; i < num2; i++) {
        product = add(product, num1);
    }

    printf("Product of %d and %d is %d\n", num1, num2, product);

 getch();
 return 0;
}

int add(int num1, int num2) {
    int carry;
    while (num2 != 0) {
        carry = (num1 & num2) << 1;
        num1 = num1 ^ num2;
        num2 = carry;
    }
    return num1;
}
