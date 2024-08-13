#include <iostream>

// Function to calculate the modular multiplicative inverse of 'a' modulo 'm'
int modularInverse(int a, int m) {
    int m0 = m;
    int x0 = 0, x1 = 1;

    if (m == 1) {
        return 0; // No modular inverse
    }

    // Apply the Extended Euclidean Algorithm
    while (a > 1) {
        // q is the quotient of a divided by m
        int q = a / m;
        
        int t = m;
        
        // m is the remainder, same as a % m
        m = a % m;
        a = t;
        
        t = x0;
        
        // Update x0 and x1
        x0 = x1 - q * x0;
        x1 = t;
    }
    
    // Make sure the result is positive
    if (x1 < 0) {
        x1 += m0;
    }

    return x1;
}

int main() {
    int a = 3, m = 11;
    int inverse = modularInverse(a, m);

    if (inverse != -1) {
        std::cout << "The modular multiplicative inverse of " << a << " modulo " << m << " is " << inverse << std::endl;
    } else {
        std::cerr << "Inverse does not exist for " << a << " modulo " << m << std::endl;
    }

    return 0;
}
