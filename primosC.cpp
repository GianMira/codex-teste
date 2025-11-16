#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

std::vector<int> firstNPrimes(int count) {
    std::vector<int> primes;
    int candidate = 2;
    while (static_cast<int>(primes.size()) < count) {
        if (isPrime(candidate)) {
            primes.push_back(candidate);
        }
        ++candidate;
    }
    return primes;
}

int main() {
    auto primes = firstNPrimes(20);
    for (int p : primes) {
        std::cout << p << "\n";
    }
    return 0;
}
