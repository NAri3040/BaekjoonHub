#include <stdio.h>

int main(void) {
    int N = 0;
    int a, b;
    int count = 0;
    int Pcount = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        count = 0;
        scanf(" %d", &a);
        for (int j = 1; j <= a; j++) {
            if (a % j == 0) {
                count++;
                
            }
        }
        if (count == 2) {
            Pcount++;
        }
    }
    printf("%d", Pcount);

    return 0;
}