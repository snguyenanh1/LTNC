#include <iostream>
#include <cstring>

char c1[5];
char c2[5] = "abcd";
//char c3[4] = "abcd"; - a value of type......
char c4[6] = "abcd";
char c5[] = "abcd";

void printArray(char c[]) {
	for (int i = 0; i < strlen(c); i++) {
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	//char c6[]; - incomplete type is not allowed
	char c7[5] = "abcd";
	char c8[6] = "abcd";
	char c9[] = "abcd";

	printArray(c1);
	printArray(c2);
	//printArray(c3);
	printArray(c4);
	printArray(c5);
	//printArray(c6);
	printArray(c7);
	printArray(c8);
	printArray(c9);
return 0;	
}