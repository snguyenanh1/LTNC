#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* a, const char* b) {
    int len = strlen(a) + strlen(b);
    char* res = new char[len + 1];
    strcpy(res, a);
    strcat(res, b);
    return res;
}

int main() {
    cout << concat("Hello", "World");
}