#include <iostream>
using namespace std;

int main() {
	string fname, lname, sex, crs, sec;
	int age;
	
	cout << "Please enter your First Name: ";
	getline(cin, fname);
	cout << "Please enter your Last Name: ";
	getline(cin, lname);
	cout << "Please enter your Age: ";
	cin >> age;
	cout << "Please enter your Sex (Male/Female): ";
	cin >> sex;
	cout << "Please enter your Course: ";
	cin >> crs;
	cout << "Please enter your Section: ";
	getline(cin, sec);
	//getline(cin, sec);
	cout << "\n";
	cout << "\n";
	
	cout << "Your name is: " << fname << " " << lname << endl;
	cout << "Your age is: " << age << endl;
	cout << "Your sex is: " << sex << endl;
	cout << "Your course and section is: " << crs << " " << sec;
	return 0;
} 
