#include <iostream>
using namespace std;

int main() {
	double Bank = 10000;
	double withdrawal;

	cout << "How much would you like to withdraw?" << endl;
	cin >> withdrawal;
	cout << "You have withdrawn " << withdrawal << " You have " << Bank - withdrawal << endl;


}