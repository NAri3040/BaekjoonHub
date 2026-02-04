#include <stdio.h>

int main() {
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min_x;
    if (x < w - x) {
        min_x = x;
    }
    else {
        min_x = w - x;
    }

    int min_y;
    if (y < h - y) {
        min_y = y;
    }
    else {
        min_y = h - y;
    }

    if (min_x < min_y) {
        printf("%d", min_x);
    }
    else {
        printf("%d", min_y);
    }

    return 0;
}