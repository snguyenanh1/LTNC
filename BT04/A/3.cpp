#include <iostream>
#include <cstring>
using namespace std;


void print(char c[][12]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};
	char daytab2[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};

	print(daytab1);
	print(daytab2);
	 
	char daytab3[2][12] = {
  {31,28,31,30,30,31,31,30,31,30,31},
  {31,29,31,30,31, 31,31,30,31,31}
	};

	char daytab4[][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};

	/*char daytab1[2][] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	}; - an array may not have elements...*/

	/*char daytab1[][] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	}; - an array may not have elements...*/

	print(daytab3);
	print(daytab4);

}