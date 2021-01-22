#include <stdio.h>

// 역방향으로의 접근
double taylorA(int x, int n)
{
    static double p = 1, f = 1;
    double r; // return 
    
    if (n== 0)
        return 1;

    r = taylorA(x, n-1);
    p = p* x;   // pow
    f = f* n;   // fac
    return r+p/f;
}

// iterative version
double taylorB(int x, int n) {
    double s = 1;
    double den = 1;
    double num = 1;

    for (int i = 1; i <= n; i++) {
        num*=x;
        den*=i;
        s += num/den;
    }

    return s;
}

int main() {
    printf("%lf \n",taylorA(4,15));
    printf("%lf \n",taylorB(4,15));

    return 0;
}
