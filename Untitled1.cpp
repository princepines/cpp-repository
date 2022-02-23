#include <iostream>
using namespace std;

int main() {
	int x = 5, y = 150, eq;
	eq = x + y;
	cout << "Sum: " << eq << endl;
	eq = x - y;
	cout << "Subtraction: " << eq << endl;
	eq = x / y;
	cout << "Division: " << eq << endl;
	eq = x * y;
	cout << "Multiplication: " << eq << endl;
	eq = x % y;
	cout << "Modulo: " << eq << endl;
	return 0;
}
