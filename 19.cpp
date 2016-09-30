#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	double a = (2*cos(X - 3.14157/6.0))/(1/2 + sin(Y)*sin(Y));
	double b = 1 + Z*Z/(3 + Z*Z/5.0);
	cout << a << endl;
	cout << b;
	return 0;
}