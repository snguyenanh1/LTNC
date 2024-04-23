
#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    int *p2 = p;
    *p = 10;
    delete p;
    *p2 = 100; //Tro den vung bo nho khong ton tai;
    cout << *p2; // Tro den vung bo nho khong ton tai
    delete p2; //Xoa bo nho khong ton tai
}
