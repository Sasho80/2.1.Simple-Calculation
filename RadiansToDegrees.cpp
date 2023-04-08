#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double pi=3.14139265359;
	double angledeg;
	double anglerad;
	cin >> anglerad;
	cout << round(anglerad * 180 / pi);
	cout << endl;
	return 0;
}