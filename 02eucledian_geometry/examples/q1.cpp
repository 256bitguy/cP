// Example 5: Using a User-Defined Struct for Extended Euclidean Algorithm
#include <iostream>

struct ExtendedGCDResult {
    int gcd;
    int x;
    int y;
};

ExtendedGCDResult extendedGCD(int a, int b) {
    if (b == 0) {
        return {a, 1, 0};
    }

    ExtendedGCDResult result = extendedGCD(b, a % b);
    int temp = result.x;
    result.x = result.y;
    result.y = temp - (a / b) * result.y;
    return result;
}

int main() {
    int num1 = 48, num2 = 18;
    ExtendedGCDResult result = extendedGCD(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result.gcd << std::endl;
    std::cout << "x and y values: " << result.x << " and " << result.y << std::endl;
    return 0;
}
