#include <stdio.h>

int F[10];

int fibo(int n){
    if (n <= 1) {
        F[n] = n;
        return n;
    }
    
    // fill items if not filled
    if (F[n-2] == -1) {
        F[n-2] = fibo(n-2);
    }

    if(F[n-1] == -1)
        F[n-1] = fibo(n-1);
    F[n] = F[n-1] + F[n-2];

    return F[n-2] + F[n-1];
}

int main() {

    for (int i = 0; i < 10; i++)
        F[i] = -1;
    int r = fibo(9);
    for (int i = 0; i < 10; i++) {
        printf("F[%d]: %d\n", i, F[i]);
    }
    
    printf("%d", r);
}