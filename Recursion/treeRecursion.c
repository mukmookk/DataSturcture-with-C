#include <stdio.h>

// 3 | 2 (1) (1) | 2 (1) (1)
// 5 | 4 (3 {2 (1) (1)} {2 (1) (1)}) (3 {2 (1) (1)} {2 (1) (1)}) | 4 (3 {2 (1) (1)} {2 (1) (1)}) (3 {2 (1) (1)} {2 (1) (1)}) 
int fun(int n) {
    if (n>0) {
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
    return 0;
}

int main() {
    fun(3);
    printf("\n");
    fun(5);
}