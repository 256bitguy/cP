// Example 2: Generating and Printing Fibonacci Numbers Using Recursion
#include <iostream>

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;  // Number of Fibonacci numbers to generate

    std::cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
