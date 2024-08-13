// Example 2: Reducing Fractions using φ
#include <iostream>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void reduceFraction(int& numerator, int& denominator) {
    int commonFactor = gcd(numerator, denominator);
    numerator /= commonFactor;
    denominator /= commonFactor;
}

int main() {
    int numerator = 36, denominator = 48;
    reduceFraction(numerator, denominator);
    std::cout << "Reduced Fraction: " << numerator << "/" << denominator << endl;
    return 0;
}
