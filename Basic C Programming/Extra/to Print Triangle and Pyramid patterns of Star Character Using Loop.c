/*
* C program to print triangle pyramid pattern using *
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i,j,rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; ++j) {
           printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
