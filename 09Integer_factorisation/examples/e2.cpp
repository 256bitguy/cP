// Example 2: Pollard's Rho Algorithm
#include <iostream>
#include <cstdlib>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long pollardRho(long long n) {
    long long x = 2, y = 2, d = 1;
    while (d == 1) {
        x = (x * x + 1) % n;
        cout<<x<<"; ";
        y = ((y * y + 1) % n * y + 1) % n;
           cout<<y<<"; ";
        d = gcd(std::abs(x - y), n);

        cout<<d<<"\n";
    }
    
    return d;
}

int main() {
    long long num = 5959; // Change to the number you want to factorize
    long long factor = pollardRho(num);
    std::cout << "A non-trivial factor of " << num << ": " << factor << std::endl;
    return 0;
}
