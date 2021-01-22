#include <stdio.h>

int fac(int n) {
    if (n == 1)
        return 1;
    return n * fac(n-1);
}
// using factorial
int nCr(int n, int r) {
    if ( n == r || r == 0 || n == 1 || n == 0)
        return 1;
        
    return fac(n) / (fac(r) * fac(n-r));
}

// using pascal triangle
int NCR(int n, int r) {
    if ( n == r || r == 0 || n == 1 || n == 0)
        return 1;
    
    return NCR(n-1, r-1) + NCR(n-1, r);
}

int main() {
    printf("%d", nCr(5,2));
}