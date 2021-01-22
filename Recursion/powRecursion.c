#include <stdio.h>

// (2, 9) (2*4, 4) (256, 2) (512, 1) (512, 0)
int powA(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return powA(m*m, (n)/2);
    return m * powA(m*m, (n-1)/2);
}

int powB(int m, int n) {
    if (n <= 0)
        return 1;
    return m * powB(m, n -1);
}

int main() {
    int r = powB(2, 9);
    printf("%d", r);
    return 0;
}