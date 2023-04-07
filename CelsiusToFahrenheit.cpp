#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double TempFahrenheit;
	double TempCelsius;
	cin >> TempCelsius;
	cout << fixed << setprecision(2)<<(TempCelsius * 1.8) + 32 << endl;
	return 0;
}