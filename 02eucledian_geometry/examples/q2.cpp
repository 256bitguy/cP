//Example 2: Using a Recursive Function
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;
    return 0;
}
