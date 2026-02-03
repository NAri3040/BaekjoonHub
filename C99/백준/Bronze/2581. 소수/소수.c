#include <stdio.h>

int main(void) {
    int N = 0, M = 0;
    int count = 0;
    int Psum = 0;
    int Pitem = 0;
    scanf("%d", &M);
    scanf("%d", &N);
        
        for (int i = M; i <= N; i++) {
            count = 0;
            for (int j = 1; j <= 10000; j++) {
                if (i % j == 0) {
                    count++;
                }

                if (count > 2) {
                    break;
                }
            }
            if (count == 2) {
                if (Pitem > i || Psum == 0) {
                    Pitem = i;
                }
                Psum += i;
            }
        }

    if (Pitem == 0) {
        printf("-1");
    }
    else
    {
        printf("%d\n%d",Psum, Pitem);
    }

    return 0;
}