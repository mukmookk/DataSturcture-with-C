#include <stdio.h>
// "91" is last return for recursive function
int fun(int n) {
    if (n > 100) {
        return n - 10;
    }
    return fun(fun(n+11));
}

int main() {
    int r;
    r = fun(95);
    printf("%d\n", r);
    return 0;
}