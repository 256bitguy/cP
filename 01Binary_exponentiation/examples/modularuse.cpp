#include <iostream>
using namespace std;
// Binary exponentiation with modular arithmetic
long long binaryExponentiationMod(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base %= modulus; // Ensure base is within the modulus

    while (exponent > 0) {
         cout<<"res->{"<<result<<"}  "<<"base->{"<<base<<"}  "<<"expo->{"<<exponent<<"}  "<<"\n";
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }

    return result;
}

int main() {
    long long base = 7;
    long long exponent = 777;
    long long modulus = 100; // A prime number

    long long result = binaryExponentiationMod(base, exponent, modulus);

    std::cout << base << "^" << exponent << " % " << modulus << " = " << result << std::endl;
    return 0;
}

/*
In this example, binaryExponentiationMod calculates base^exponent % modulus 
using modular exponentiation. 
This is a crucial operation in many cryptographic algorithms like RSA. 
When you run this code with base = 2, exponent = 10, and modulus = 1000000007, 
it will calculate (2^10) % 1000000007, which is 24.

These examples illustrate the power and efficiency of binary exponentiation, 
both for standard exponentiation and for modular exponentiation in cryptography.*/