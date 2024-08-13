//Example 4: Using a Function Template for Any Numeric Type
#include <iostream>

template <typename T>
T gcd(T a, T b) {
    while (b != 0) {
        T remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1 = 48, num2 = 18;
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;

    double x = 20.0, y = 7.5;
    double result2 = gcd(x, y);
    std::cout << "GCD of " << x << " and " << y << " is " << result2 << std::endl;

    return 0;
}
