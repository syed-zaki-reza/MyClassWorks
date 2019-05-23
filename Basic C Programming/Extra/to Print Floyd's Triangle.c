

/*
* C program to print Floyd's triangle
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i, j, rows, counter;

    printf("Enter the number of rows of Floyd's triangle\n");
    scanf("%d", &rows);
    for (counter = 1, i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%3d", counter++);
        }
        printf("\n");
    }

    getch();
    return 0;
}
