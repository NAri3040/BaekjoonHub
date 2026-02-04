#include <stdio.h>


/*
2 3 3 5
1 2 2 4
*/

int main() {
    int n = 0, x = 0, y = 0;
    int minX = 0, maxX = 0, minY = 0, maxY = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &x, &y);
        if (i == 0) {
            minX = x;
            minY = y;
            maxX = x;
            maxY = y;
        }

        if (minX > x) {
            minX = x;
        }
        else if (maxX < x)
        {
            maxX = x;
        }

        if (minY > y) {
            minY = y;
        }
        else if (maxY < y)
        {
            maxY = y;
        }
    }

    x = maxX - minX;
    y = maxY - minY;

    if (x * y < 0) {
        printf("%d", -1 * (x * y));
    }
    else
    {
        printf("%d", x * y);
    }



    return 0;
}