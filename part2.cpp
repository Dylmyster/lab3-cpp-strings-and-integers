#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int main() {
	// Creating Variables //
	string line1;
	string line2;
	string line3;

	// Asking the User to write the haikou //
	cout << " Please enter 3 Lines for the haiku" << endl << endl;

	// Asking the User to Write the 3 Lines to Form the Haikou //
	cout << " Please enter 1 Lines " << endl << endl;
	getline(cin, line1);
	cout << " Please enter 2 Lines " << endl << endl;
	getline(cin, line2);
	cout << " Please enter 3 Lines " << endl << endl;
	getline(cin, line3);


	cout << endl;

	// Displaying the Haikou for the User //
	cout << "your Haiku is:" << endl;

	cout << endl;

	cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;

	cout << endl;
	
	system("PAUSE");
	return 0;

}