#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 50;
    }
}

void print(int arr[], int N) {
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")\n";
                }
            }
        }
    }
}

int main() {
    srand(time(0));
    int N;
    cin >> N;
    int* arr = new int[N];

    randomArray(arr, N);
    print(arr, N);

    delete[] arr;
    return 0;
}