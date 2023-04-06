#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	double a, h;
	cin >> a;
	cin >> h;
	cout << "Triangle area=";
	cout <<fixed<< setprecision(2)<< (a * h) / 2;
	cout << endl;
	return 0;
}
