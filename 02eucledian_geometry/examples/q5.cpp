//Example 1: Using a While Loop
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1 = 48, num2 = 18;
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;
    return 0;
}
