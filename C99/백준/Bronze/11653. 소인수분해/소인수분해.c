#include <stdio.h>

int main(void) {
    int N;
    int a = 0;
    int i = 2;

    scanf("%d", &N);

    while (1)
    {
        if (N % i == 0) {
            printf("%d\n", i);
            N = N / i;
            continue;
        }
        else if (N == 1)
        {
            break;
        }
        i++;
    }

    return 0;
}