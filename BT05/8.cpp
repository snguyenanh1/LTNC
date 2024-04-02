#include <iostream>
#include <cmath>
using namespace std;

int CeilFloor(double number) {
    double fractionPart = number - (int)number;
    if (fractionPart >= 0.5) return ceil(number);
    else return floor(number);
}


int noCeilFloor(double number) {
    int integerPart = (int) number;
    double fractionPart = number - integerPart;
    if (fractionPart >= 0.5 || fractionPart <= -0.5) {
        if (number > 0) return integerPart + 1;
        else return integerPart - 1;
    } else {
        return integerPart;
    }
}