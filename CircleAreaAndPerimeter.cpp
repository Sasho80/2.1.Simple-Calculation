#include <iostream>
using namespace std;
int main() {
	cout << "Enter circle radius.r=";
	double r;
	cin >> r;
	double pi = 3.14159265359;
	cout << "Area=" << pi * r * r << endl;
	cout << "Perimeter=" << 2 * pi * r << endl;
	return 0;
}