#include <stdio.h>

int main() {
    int x = 0, temp[3] = { 0 }, v[3] = { 0 };
    while (1) {
        for (int i = 0; i < 3; i++) {
            scanf(" %d", &x);
            temp[i] = x;
            
        }

        if (temp[0] == 0 && temp[0] == temp[1] && temp[1] == temp[2]) {
            break;
        }
        int max = temp[0];
        int sum = temp[0] + temp[1] + temp[2];

        if (temp[1] > max) max = temp[1];
        if (temp[2] > max) max = temp[2];

        if (max >= sum - max) {
            printf("Invalid\n");
        }
        else if (temp[0] == temp[1] && temp[1] == temp[2]) {
            printf("Equilateral\n");
        }
        else if (temp[0] == temp[1] || temp[1] == temp[2] || temp[0] == temp[2]) {
            printf("Isosceles\n");
        }
        else if (temp[0] != temp[1] && temp[0] != temp[2] && temp[1] != temp[2])
        {
            printf("Scalene\n");
        }
    }
    return 0;
}