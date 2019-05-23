#include <stdio.h>

int main() {
    int counter, N;
 
    printf("Enter a Number\n");
    scanf("%d", &N);

    printf("Factors of %d\n", N);

    
    for(counter = 1; counter <= N; counter++) {
        if(N%counter == 0) {
            printf("%d ", counter);
        }
    }

    return 0;
}
