#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int arr[4] = {x, w - x, y, h - y};
    int min = arr[0];

    for (int i = 1; i < 4; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d", min);
    return 0;
}