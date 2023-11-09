#include <iostream>
using namespace std;

void welcome() {
	cout << "Welcome! \n";
}

void printNum(int numToPrint) {
	cout << numToPrint << endl;
}

int add(int a, int b) {
	return a + b;
}

int main() {
	welcome();
	printNum(5);
	cout << add(5, 5) << endl;
	int c = 5 + add(5, 5);
	printNum(c);

	system("pause");
}