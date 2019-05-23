/*
* C Program to find nPr using function
*/
#include <stdio.h>
#include <conio.h>

int getFactorial(int N);
int main(){
    int n, r, nPr;
    printf("Enter n and r for nPr calculation\n");
    scanf("%d %d",&n, &r);

    nPr = getNPR(n, r);
    if(nPr == -1){
        printf("Invalid Input: n must be >= r\n");
    } else {
        printf("%dP%d = %d\n", n, r, nPr);
    }

    getch();
    return 0;
}

 int getNPR(int n, int r){
     if(r > n){        
         return -1;
     }
     return getFactorial(n)/getFactorial(n - r);
 }
int getFactorial(int N){
    if(N < 0){
        printf("Invalid Input");
        return 0;
    }
    int nFactorial, counter;
    for(counter = 1, nFactorial = 1; counter <= N; counter++){
        nFactorial = nFactorial * counter;
    }
    return nFactorial;
}
