#include <stdio.h>

int main() {
    int a = 0, b= 0 , item[100000] = { 0 };
    int temp = 0;

    for (int i = 0; i < 5; i++) {
        scanf(" %d", &item[i]);
    }

    for (int k = 0; k < 5 - 1; k++) {
        for (int j = 0; j < 5 - 1; j++) {
            if (item[j] > item[j + 1]) {
                temp = item[j + 1];
                item[j + 1] = item[j];
                item[j] = temp;
            }
        }
    }

    for (int j = 0; j < 5; j++) {
        a += item[j];
    }

    printf("%d\n%d", a / 5, item[2]);

}