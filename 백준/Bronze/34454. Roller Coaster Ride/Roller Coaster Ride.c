#include <stdio.h>

int main() {
    long long N, C, P;

    if (scanf("%lld", &N) != 1) return 0;
    if (scanf("%lld", &C) != 1) return 0;
    if (scanf("%lld", &P) != 1) return 0;

    if (N <= C * P) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}