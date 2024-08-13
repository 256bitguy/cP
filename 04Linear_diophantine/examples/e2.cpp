// Solving 12x + 9y = 15
#include <iostream>

// Extended Euclidean Algorithm to find Bézout's coefficients
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
    int a = 12, b = 9, c = 15;
    int x, y;
    int gcd = extendedGCD(a, b, x, y);

    if (c % gcd == 0) {
        int k = c / gcd;
        int x_particular = x * k;
        int y_particular = y * k;

        std::cout << "Particular solution: x = " << x_particular << ", y = " << y_particular << std::endl;
        std::cout << "General solution: x = " << x_particular + (b / gcd) << "n, y = " << y_particular - (a / gcd) << "n" << std::endl;
    } else {
        std::cout << "No integer solutions." << std::endl;
    }

    return 0;
}
