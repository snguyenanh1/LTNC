#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBin(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2) + '0';
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int binToDec(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}