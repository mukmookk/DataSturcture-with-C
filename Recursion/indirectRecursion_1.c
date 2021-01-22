#include <stdio.h>

int fun_b(int n);

// 20 19 9 8 4 3 1 
int fun_a(int n) {
    if (n > 0) {
        printf("%d ", n);
        fun_b(n-1);
    }
    return 0;
}

int fun_b(int n) {
    if (n > 1) {
        printf("%d",n);
        fun_a(n/2);
    }
    return 0;
} 

int main() {
    fun_a(20);
}