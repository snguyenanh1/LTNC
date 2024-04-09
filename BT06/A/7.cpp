#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    char* c1 = argv[1];
    char* c2 = argv[2];
    int count = 0;
    for (int i = 0; i <= strlen(c2) - strlen(c1); i++) {
        if (strncmp(c1, c2 + i, strlen(c1)) == 0) count++;
    }
    cout << count << endl;
}