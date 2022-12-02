#include <stdio.h>

int past(int h, int m, int s);

int main() {

    int hours = 1, mins = 1, secs = 1;

    int result = past(hours, mins, secs);

    printf(" %d\n", result);
    return 0;
}

int past(int h, int m, int s) {
    return 1000 * (h * 3600 + m * 60 + s);
}