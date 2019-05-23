#include <stdio.h>

int main() {
    int counter, N, i, isPrime;

    printf("Enter a Number\n");
    scanf("%d", &N);

    printf("List of Prime Factors of %d\n", N);
    /*Check for every number between 1 to N,
   whether it divides N */
    for(counter = 2; counter <= N; counter++) {
        /*
         * If counter completely divides N,
         * then it is a factor of N
         */
        if(N%counter==0) {
            /* Check if counter is also a prime number */
            isPrime = 1;
            for(i = 2; i <=(counter/2); i++) {
                if(counter%i==0) {
                    isPrime=0;
                    break;
                }
            }

            if(isPrime==1)
                printf("%d ", counter);
        }
    }

    return 0;
}

