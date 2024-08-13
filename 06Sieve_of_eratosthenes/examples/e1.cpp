// Example 1: Finding Primes Up to a Limit
#include <iostream>
#include <vector>

void sieveOfEratosthenes(int limit) {
    std::vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    std::cout << "Prime numbers up to " << limit << ": ";
    for (int p = 2; p <= limit; p++) {
        if (isPrime[p]) {
            std::cout << p << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int limit = 30; // Specify the limit to find primes up to 30
    sieveOfEratosthenes(limit);
    return 0;
}
