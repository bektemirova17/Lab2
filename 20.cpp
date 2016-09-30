#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int x, y, z;
	cin >> x >> y >> z;
	double a = (1 + sin(x + y) * sin(x + y))/(2 + abs(x-2 * x/(1 + x * x * y * y))) + x;
	double b = cos(atan(1.0 / z)) * cos(atan(1.0 / z));
	cout << a << endl;
	cout << b;
	return 0;
}
