#include <stdio.h>

// 역방향으로의 접근
double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r; // return 
    
    if (n== 0)
        return 1;

    r = taylor(x, n-1);
    p = p* x;   // pow
    f = f* n;   // fac
    return r+p/f;
}

int main() {
    printf("%lf \n",taylor(4,15));
    return 0;
}
