// Example 1: Calculating Euler's Totient Function
#include <iostream>

int eulerTotient(int n) {
    int result = n; // Initialize result with n

    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) {
                n /= p;
            }
            result -= result / p;
        }
    }

    if (n > 1) {
        result -= result / n;
    }

    return result;
}

int main() {
    int n = 12; // Change to the number for which you want to calculate φ(n)
    int phi = eulerTotient(n);
    std::cout << "Euler's Totient function φ(" << n << ") = " << phi << std::endl;
    return 0;
}
