// Example 1: Finding Bézout's Coefficients
#include <iostream>

// Extended Euclidean Algorithm to find Bézout's coefficients x and y
int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main() {
    int a = 48, b = 18;
    int x, y;
    int gcd = extendedGCD(a, b, x, y);

    std::cout << "Bézout's coefficients for " << a << " and " << b << " are x = " << x << " and y = " << y << std::endl;
    std::cout << "GCD(" << a << ", " << b << ") = " << gcd << std::endl;

    return 0;
}
