#include <stdio.h>

int main(void) {
    int N, M;
    int sum = 0;
    int min_prime = -1; 

    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = M; i <= N; i++) {
        if (i == 1) continue;

        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            if (min_prime == -1) {
                min_prime = i;
            }
            sum += i;
        }
    }

    if (min_prime == -1) {
        printf("-1");
    }
    else {
        printf("%d\n%d", sum, min_prime);
    }

    return 0;
}