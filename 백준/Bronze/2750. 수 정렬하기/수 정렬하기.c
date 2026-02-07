#include <stdio.h>

int main() {
    int n, item[100000] = { 0 };
    int temp = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &item[i]);
    }

    for (int k = 0; k < n - 1; k++) {
        for (int j = 0; j < n - 1; j++) {
            if (item[j] > item[j + 1]) {
                temp = item[j + 1];
                item[j + 1] = item[j];
                item[j] = temp;
            }
        }
    }
    
    
    for (int l = 0; l < n; l++) {
        printf("%d\n", item[l]);
    }

}