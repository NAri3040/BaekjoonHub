#include <stdio.h>

int main() {
    int h, m, cooking_time;
    
    scanf("%d %d", &h, &m);
    scanf("%d", &cooking_time);
    
    int total_minutes = h * 60 + m + cooking_time;
    
    int end_hour = (total_minutes / 60) % 24;
    int end_minute = total_minutes % 60;
    
    printf("%d %d\n", end_hour, end_minute);
    
    return 0;
}