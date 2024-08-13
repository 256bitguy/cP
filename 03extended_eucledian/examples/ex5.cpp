// Example 7: Finding Modular Inverse in a Finite Field with a Larger Prime
#include <iostream>

// Extended Euclidean Algorithm to find the modular multiplicative inverse of a modulo a prime number p
int modularInverse(int a, int p) {
    int x, y;
    int gcd = extendedGCD(a, p, x, y);

    if (gcd != 1) {
        std::cerr << "Inverse does not exist as GCD(" << a << ", " << p << ") != 1" << std::endl;
        return -1; // Inverse doesn't exist
    }

    // Ensure the result is non-negative
    int inverse = (x % p + p) % p;
    return inverse;
}

int main() {
    int a = 7, p = 101;
    int inverse = modularInverse(a, p);

    if (inverse != -1) {
        std::cout << "The modular multiplicative inverse of " << a << " modulo " << p << " is " << inverse << std::endl;
    }

    return 0;
}