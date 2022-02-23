#include <iostream>
using namespace std;

int main() {
	int amt, namt;
	
	cout << "Enter Amount: ";
	cin >> amt;
	
	// 1000's
	namt = amt / 1000;
	amt =  amt - (1000 * namt);
	cout << "Amount for 1000 is: " << namt << endl;
	//500's
	namt = amt / 500;
	amt = amt - (500 * namt);
	cout << "Amount for 500 is: " << namt << endl;
	//200's
	namt = amt / 200;
	amt = amt - (200 * namt);
	cout << "Amount for 200 is: " << namt << endl;
	//100's
	namt = amt / 100;
	amt = amt - (100 * namt);
	cout << "Amount for 100 is: " << namt << endl;
	//50's
	namt = amt / 50;
	amt = amt - (50 * namt);
	cout << "Amount for 50 is: " << namt << endl;
	//20's
	namt = amt / 20;
	amt = amt - (20 * namt);
	cout << "Amount for 20 is: " << namt << endl;
	//10's
	namt = amt / 10;
	amt = amt - (10 * namt);
	cout << "Amount for 10 is: " << namt << endl;
	//5's
	namt = amt / 5;
	amt = amt - (5 * namt);
	cout << "Amount for 5 is: " << namt << endl;
	//1's
	namt = amt / 1;
	amt = amt - (1 * namt);
	cout << "Amount for 1 is: " << namt << endl;
	return 0;
}
