#include <stdio.h>

int fun_b(int n);

// 1 3 4 8 9 19 20
int fun_a(int n) {
    if (n > 0) {
        fun_b(n-1);
        printf("%d ", n);
    }
    return 0;
}

int fun_b(int n) {
    if (n > 1) {
        fun_a(n/2);
        printf("%d ",n);
    }
    return 0;
} 

int main() {
    fun_a(20);
}
