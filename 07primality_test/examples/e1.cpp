// Example 1: Trial Division
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int num = 17; // Change to the number you want to test
    bool result = isPrime(num);

    if (result) {
        std::cout << num << " is prime." << std::endl;
    } else {
        std::cout << num << " is composite." << std::endl;
    }

    return 0;
}
