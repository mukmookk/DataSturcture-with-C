#include <stdio.h>

// 5 4 3 2 1 
int fun(int n) {
    if (n > 0) {
        printf("%d", n);
        fun(n-1);
    }
}

int main() {
    fun(5);
}