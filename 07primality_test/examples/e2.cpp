// Example 2: Miller-Rabin Primality Test
#include <iostream>
#include <cstdlib>

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

bool millerRabin(long long n, int k) {
    if (n <= 1 || n == 4) return false;
    if (n <= 3) return true;

    int s = 0;
    long long d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    for (int i = 0; i < k; i++) {
        long long a = 2 + rand() % (n - 3);
        long long x = modPow(a, d, n);

        if (x == 1 || x == n - 1) continue;

        for (int r = 1; r < s; r++) {
            x = modPow(x, 2, n);
            if (x == 1) return false;
            if (x == n - 1) break;
        }

        if (x != n - 1) return false;
    }

    return true;
}

int main() {
    long long num = 17; // Change to the number you want to test
    int iterations = 5; // Number of iterations for the Miller-Rabin test
    bool result = millerRabin(num, iterations);

    if (result) {
        std::cout << num << " is probably prime." << std::endl;
    } else {
        std::cout << num << " is composite." << std::endl;
    }

    return 0;
}
