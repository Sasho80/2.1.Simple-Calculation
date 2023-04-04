#include <iostream>
using namespace std;
#include <cmath>
int main() {
	double x1, x2, y1, y2;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	double width = fabs(x2 - x1);
	double height = fabs(y2-y1);
	cout << "Area=" << width * height << endl;
	cout << "Perimeter=" << 2 * (width + height) << endl;
	return 0;
}
