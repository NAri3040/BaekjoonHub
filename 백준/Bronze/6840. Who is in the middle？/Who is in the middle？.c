#include <stdio.h>

int main() {
    int weight[3];
    int temp;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &weight[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (weight[i] > weight[j]) {
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
            }
        }
    }

    printf("%d\n", weight[1]);

    return 0;
}