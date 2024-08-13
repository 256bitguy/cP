// Example 1: Generating and Printing Fibonacci Numbers Using a Loop
    #include <iostream>

int main() {
    int n = 10;  // Number of Fibonacci numbers to generate
    long long fib1 = 0, fib2 = 1, nextFib;

    std::cout << "Fibonacci sequence up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            nextFib = i;
        } else {
            nextFib = fib1 + fib2;
            fib1 = fib2;
            fib2 = nextFib;
        }
        std::cout << nextFib << " ";
    }

    return 0;
}
