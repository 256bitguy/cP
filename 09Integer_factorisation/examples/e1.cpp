// Example 1: Trial Division
#include <iostream>
#include <vector>

std::vector<int> trialDivision(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int num = 56; // Change to the number you want to factorize
    std::vector<int> factors = trialDivision(num);
    std::cout << "Prime factors of " << num << ": ";
    for (int factor : factors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;
    return 0;
}
