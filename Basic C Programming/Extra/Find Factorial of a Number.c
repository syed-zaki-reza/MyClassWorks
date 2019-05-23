/*
* C Program to print factorial of a number
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int N, nFactorial, counter;
    printf("Enter a number for factorial calculation \n");
    scanf("%d",&N);
    /*
     * N! = N*(N-1)*(N-2)*(N-3)*.....*3*2*1
     */
    for(counter = 1, nFactorial = 1; counter <= N; counter++){
        nFactorial = nFactorial * counter;
    }
    printf("Factorial of %d is %d", N, nFactorial);

    getch();
    return 0;
}
