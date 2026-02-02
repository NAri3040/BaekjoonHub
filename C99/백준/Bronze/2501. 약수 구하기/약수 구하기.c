#include <stdio.h>

int main(void) {
    int a, b;
    int count = 0;

        scanf("%d %d", &a, &b);

        for (int i = 1; i <= a; i++) {
            if (a % i == 0) {
                count++;

                if (count == b) {
                    printf("%d", i);
                    return 0;
                }
            }
        }

    printf("0");

    return 0;
}