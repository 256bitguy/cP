// Example 3: Function with Error Handling
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("GCD is undefined when the second number is 0.");
    }
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1 =0, num2 = 8;
    try {
        int result = gcd(num1, num2);
        std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
