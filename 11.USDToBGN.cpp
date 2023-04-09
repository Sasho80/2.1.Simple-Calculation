#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	double USD;
	double BGN;
	cin >> USD;
	BGN = 1.79549 * USD;
	cout << fixed << setprecision(2)<<BGN;
	cout <<" BGN" << endl;
	return 0;
}
