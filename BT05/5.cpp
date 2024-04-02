#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int N;
    cin >> N; 

    for (int i = 2; i < N; ++i) {
        if (isPrime(i)) {
            cout << i << " "; 
        }
    }
    return 0;
}