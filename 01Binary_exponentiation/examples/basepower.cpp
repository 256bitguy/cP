

#include <iostream>

// Binary exponentiation function
long long binaryExponentiation(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base; // Square the base
        exponent /= 2; // Divide the exponent by 2
    }
    return result;
}

int main() {
    long long base = 2;
    long long exponent = 17;

    long long result = binaryExponentiation(base, exponent);

    std::cout << base << "^" << exponent << " = " << result << std::endl;
    return 0;
}
/*
In this example, we have a binaryExponentiation function that
 calculates base^exponent using the binary exponentiation algorithm. 
 The function repeatedly squares the base and halves the exponent while examining 
 its binary representation, multiplying the result by the base when a binary bit is 
 set.

// When you run this code with base = 2 and exponent = 10, 
it will calculate 2^10, which is 1024.s
*/ 