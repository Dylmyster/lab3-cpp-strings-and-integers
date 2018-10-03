#include <iostream>
#include <string>

using namespace std;

int main() {

	// Creating Variables //
	int num1;
	int num2;
	int num3;
	int total;

		// Asking the User for 3 Numbers //
		cout << " please enter three numbers " << endl;
	// Putting the Numbers into the varibles //
	cin >> num1 >> num2 >> num3;

	// Multiplying for Solution using variables //
	total = num1 * num2 * num3;
	// Displaying the total to the user//
	cout << "The total of " << num1 << ", " << num2 << " and " << num3 << " is: " << total;

	system("PAUSE");
	return 0;

}