#include <stdio.h>

int main() {
    int n, t, v = 0, max = 0, card[105] = { 0 };
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }

    for (int j = 0; j < n - 2; j++) {
        for (int k = j + 1; k < n - 1; k++) {
            for (int l = k + 1; l < n; l++) {
                v = card[j] + card[k] + card[l];
                if (v <= t && v > max) {
                    max = v;
                }

                if (max == t) {
                    printf("%d", max);
                    return 0;
                }
            }
        }
    }

    printf("%d", max);
    return 0;
}