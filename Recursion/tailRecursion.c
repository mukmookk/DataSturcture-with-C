#include <stdio.h>

// 1 2 3 4 5
int fun(int n) {
    if (n > 0) {
        fun(n-1);
        printf("%d", n);
    }
}

int main() {
    fun(5);
}