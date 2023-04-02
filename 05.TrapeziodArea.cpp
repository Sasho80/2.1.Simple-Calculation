#include <iostream>
using namespace std;
int main() {
	string firstName, LastName, Town;
	double b1, b2, h;
	cin >> b1;
	cin >> b2;
	cin >> h;
	double area = (b1 +b2)* h/2.0;
	cout << "Trapeziod area=";
	cout << area << endl;
	return 0;
}
