#include <stdio.h>

int main() {
    int n1, k1, n2, k2;

    if (scanf("%d %d %d %d", &n1, &k1, &n2, &k2) == 4) {
        printf("%d\n", (n1 * k1) + (n2 * k2));
    }

    return 0;
}