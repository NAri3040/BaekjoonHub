#include <stdio.h>

int main() {
    int n = 0, x = 0, sum = 0, temp[3] = {0};
    for (int i = 0; i < 3; i++) {
        scanf(" %d", &x);
        temp[i] = x;
        sum += x;
        
    }

    if (sum != 180) {
        printf("Error");
    }
    else if (temp[0] == temp[1] && temp[1] == temp[2]) {
        printf("Equilateral");
    }
    else if (temp[0] == temp[1] || temp[1] == temp[2] || temp[0] == temp[2]) {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }



    return 0;
}