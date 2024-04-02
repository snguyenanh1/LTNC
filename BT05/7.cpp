#include <iostream>
using namespace std;

void printLine(int M, int N) {
    for (int i = 0; i < M; i++) {
        cout << " ";
    }
    for (int i = 0; i < N; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int lines;
    cin >> lines;

    for (int i = 1; i <= lines; i++) {   
        int M = lines - i; 
        int N = 2 * i - 1; 
        printLine(M, N);
    }

    return 0;
}