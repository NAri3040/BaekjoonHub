#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Dot;

int compare(const void* a, const void* b) {
    Dot* A = (Dot*)a;
    Dot* B = (Dot*)b;


    if (A->y > B->y) return 1;
    else if (A->y < B->y) return -1;


    else {
        if (A->x > B->x) return 1;
        else if (A->x < B->x) return -1;
        else return 0;
    }
}

int main() {
    int n;

    static Dot item[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &item[i].x, &item[i].y);
    }

    qsort(item, n, sizeof(Dot), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", item[i].x, item[i].y);
    }

    return 0;
}